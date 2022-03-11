#ifndef BYNAV_INSPOS_H
#define BYNAV_INSPOS_H

#include <bynav_gps_msgs/Inspos.h>

#include "message_parser.h"

namespace bynav_gps_driver {

class InsposParser : public MessageParser<bynav_gps_msgs::InsposPtr> {
public:
  uint32_t GetMessageId() const override;

  const std::string GetMessageName() const override;

  bynav_gps_msgs::InsposPtr
  ParseBinary(const BinaryMessage &bin_msg) noexcept(false) override;

  bynav_gps_msgs::InsposPtr ParseAscii(const BynavSentence &sentence) override;

  static constexpr uint32_t MESSAGE_ID = 265;
  static const std::string MESSAGE_NAME;
  static constexpr size_t BINARY_LENGTH = 52;
};
} // namespace bynav_gps_driver

#endif // BYNAV_INSPOS_H
