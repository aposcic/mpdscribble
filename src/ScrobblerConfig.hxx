/* mpdscribble (MPD Client)
 * Copyright (C) 2008-2019 The Music Player Daemon Project
 * Copyright (C) 2005-2008 Kuno Woudt <kuno@frob.nl>
 * Project homepage: http://musicpd.org
 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef SCROBBLER_CONFIG_HXX
#define SCROBBLER_CONFIG_HXX

#include <string>

struct ScrobblerConfig {
	/**
	 * The name of the mpdscribble.conf section.  It is used in
	 * log messages.
	 */
	std::string name;

	std::string url;
	std::string username;
	std::string password;

	/**
 	 * Regex patterns applied on the artist, album and
	 * track fields. Used to remove unwanted parts
	 * (e.g. "remastered") before scrobbling.
   */
	std::string artist_name_remove;
	std::string album_title_remove;
	std::string track_title_remove;

	/**
	 * The path of the journal file.  It contains records which
	 * have not been submitted yet.
	 */
	std::string journal;

	/**
	 * The path of the log file.  This is set when logging to a
	 * file is configured instead of submission to an
	 * AudioScrobbler server.
	 */
	std::string file;
};

#endif
