#ifndef BYNAV_GPS_DRIVER_GPNTR_H
#define BYNAV_GPS_DRIVER_GPNTR_H

#include <bynav_gps_msgs/Gpntr.h>

#include "message_parser.h"

namespace bynav_gps_driver {

class GpntrParser : public MessageParser<bynav_gps_msgs::GpntrPtr> {
public:
  uint32_t GetMessageId() const override;

  const std::string GetMessageName() const override;

  bynav_gps_msgs::GpntrPtr ParseAscii(const NmeaSentence &sentence) override;

  static constexpr size_t ASCII_BODY_FIELDS = 9;
  static const std::string MESSAGE_NAME;
};
} // namespace bynav_gps_driver

#endif // BYNAV_GPS_DRIVER_GPNTR_H
