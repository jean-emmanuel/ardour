/*
 * Copyright (C) 2017 Robin Gareus <robin@gareus.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <pbd/failed_constructor.h>

#include "control_protocol/control_protocol.h"
#include "faderport8.h"

using namespace ARDOUR;
using namespace ArdourSurface::FP_NAMESPACE;

static ControlProtocol*
new_faderport16_midi_protocol (ControlProtocolDescriptor* /*descriptor*/, Session* s)
{
	FaderPort8* fp;

	try {
		fp =  new FaderPort8 (*s);
	} catch (failed_constructor& err) {
		return 0;
	}

	if (fp->set_active (true)) {
		delete fp;
		return 0;
	}

	return fp;
}

static void
delete_faderport16_midi_protocol (ControlProtocolDescriptor* /*descriptor*/, ControlProtocol* cp)
{
	delete cp;
}

static bool
probe_faderport16_midi_protocol (ControlProtocolDescriptor* /*descriptor*/)
{
	return FaderPort8::probe ();
}

static ControlProtocolDescriptor faderport16_midi_descriptor = {
	/*name :              */    "PreSonus FaderPort16",
	/*id :                */    "uri://ardour.org/surfaces/faderport16:0",
	/*ptr :               */    0,
	/*module :            */    0,
	/*mandatory :         */    0,
	/*supports_feedback : */    true,
	/*probe :             */    probe_faderport16_midi_protocol,
	/*initialize :        */    new_faderport16_midi_protocol,
	/*destroy :           */    delete_faderport16_midi_protocol,
};

extern "C" ARDOURSURFACE_API
ControlProtocolDescriptor* protocol_descriptor () {
	return &faderport16_midi_descriptor;
}
