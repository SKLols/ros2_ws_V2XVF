Header header
ItsPduHeader its_header

#CpmParameters container
uint16 generation_delta_time # milliseconds since 2004 modulo 2^16

#CpmParameters

## CpmManagementContainer
StationType station_type
ReferencePosition reference_position

## StationDataContainer
# TODO extend to OriginatingRSUContainer
OriginatingVehicleContainer originatingvehiclecontainer

bool has_sensor_information_container
SensorInformationContainer sensorinformationcontainer

bool has_list_of_perceived_object
ListOfPerceivedObjects listofperceivedobjects

int32 numberofperceivedobjects

# TODO: include FreeSpaceAddendumContainer
