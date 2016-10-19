// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Token.cpp
 */

#include <fastrtps/rtps/common/Token.h>

using namespace eprosima::fastrtps::rtps;

std::vector<uint8_t>* DataHolderHelper::find_binary_property(DataHolder& data_holder, const std::string& name)
{
    std::vector<uint8_t>* returnedValue = nullptr;

    for(auto property = data_holder.binary_properties().begin(); property != data_holder.binary_properties().end(); ++property)
    {
        if(property->name().compare(name) == 0)
        {
            returnedValue = &property->value();
            break;
        }
    }

    return returnedValue;
}