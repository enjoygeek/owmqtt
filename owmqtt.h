/*
    OQMQTT - 1-wire to MQTT bridge
    Copyright (C) 2011-2012 Nicholas J Humfrey <njh@aelius.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _OWMQTT_H_
#define _OWMQTT_H_

/* Constants */
#define DEFAULT_OWFS_PARAMS     "-u -f fic"
#define DEFAULT_POLLING         (10)

#define DEFAULT_MQTT_PREFIX     "/1wire"
#define DEFAULT_MQTT_HOST       "mqtt.aelius.co.uk"
#define DEFAULT_MQTT_PORT       (1883)
#define DEFAULT_MQTT_QOS        (0)
#define DEFAULT_MQTT_RETAIN     (1)
#define DEFAULT_MQTT_KEEPALIVE  (10)

#define MAX_PATH_LEN            (255)

#ifndef TRUE
#define TRUE   (1)
#endif

#ifndef FALSE
#define FALSE  (0)
#endif



// ------- Logging ---------

#define OWMQTT_DEBUG  (2)
#define OWMQTT_INFO   (4)
#define OWMQTT_ERROR  (8)

#define owmqtt_debug( ... ) \
    owmqtt_log(OWMQTT_DEBUG, __VA_ARGS__ )

#define owmqtt_info( ... ) \
    owmqtt_log(OWMQTT_INFO, __VA_ARGS__ )

#define owmqtt_error( ... ) \
    owmqtt_log(OWMQTT_ERROR, __VA_ARGS__ )

#endif
