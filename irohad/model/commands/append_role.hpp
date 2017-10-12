/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef IROHA_APPEND_ROLE_HPP
#define IROHA_APPEND_ROLE_HPP

#include <string>
#include "model/command.hpp"

namespace iroha {
  namespace model {

    /**
     * Add role to account
     */
    struct AppendRole : public Command {
      /**
       * Account to which add new role
       */
      std::string account_id{};
      /**
       * Role to add to account
       */
      std::string role_name{};

      bool operator==(const Command &command) const override;

      AppendRole() {}

      AppendRole(const std::string &account_id_, const std::string &role_name_)
          : account_id(account_id_), role_name(role_name_) {}
    };
  }  // namespace model
}  // namespace iroha
#endif  // IROHA_APPEND_ROLE_HPP