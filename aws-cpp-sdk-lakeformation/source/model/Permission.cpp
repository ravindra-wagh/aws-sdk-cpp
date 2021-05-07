﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/Permission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace PermissionMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int SELECT_HASH = HashingUtils::HashString("SELECT");
        static const int ALTER_HASH = HashingUtils::HashString("ALTER");
        static const int DROP_HASH = HashingUtils::HashString("DROP");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int DESCRIBE_HASH = HashingUtils::HashString("DESCRIBE");
        static const int CREATE_DATABASE_HASH = HashingUtils::HashString("CREATE_DATABASE");
        static const int CREATE_TABLE_HASH = HashingUtils::HashString("CREATE_TABLE");
        static const int DATA_LOCATION_ACCESS_HASH = HashingUtils::HashString("DATA_LOCATION_ACCESS");
        static const int CREATE_TAG_HASH = HashingUtils::HashString("CREATE_TAG");
        static const int ALTER_TAG_HASH = HashingUtils::HashString("ALTER_TAG");
        static const int DELETE_TAG_HASH = HashingUtils::HashString("DELETE_TAG");
        static const int DESCRIBE_TAG_HASH = HashingUtils::HashString("DESCRIBE_TAG");
        static const int ASSOCIATE_TAG_HASH = HashingUtils::HashString("ASSOCIATE_TAG");


        Permission GetPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return Permission::ALL;
          }
          else if (hashCode == SELECT_HASH)
          {
            return Permission::SELECT;
          }
          else if (hashCode == ALTER_HASH)
          {
            return Permission::ALTER;
          }
          else if (hashCode == DROP_HASH)
          {
            return Permission::DROP;
          }
          else if (hashCode == DELETE__HASH)
          {
            return Permission::DELETE_;
          }
          else if (hashCode == INSERT_HASH)
          {
            return Permission::INSERT;
          }
          else if (hashCode == DESCRIBE_HASH)
          {
            return Permission::DESCRIBE;
          }
          else if (hashCode == CREATE_DATABASE_HASH)
          {
            return Permission::CREATE_DATABASE;
          }
          else if (hashCode == CREATE_TABLE_HASH)
          {
            return Permission::CREATE_TABLE;
          }
          else if (hashCode == DATA_LOCATION_ACCESS_HASH)
          {
            return Permission::DATA_LOCATION_ACCESS;
          }
          else if (hashCode == CREATE_TAG_HASH)
          {
            return Permission::CREATE_TAG;
          }
          else if (hashCode == ALTER_TAG_HASH)
          {
            return Permission::ALTER_TAG;
          }
          else if (hashCode == DELETE_TAG_HASH)
          {
            return Permission::DELETE_TAG;
          }
          else if (hashCode == DESCRIBE_TAG_HASH)
          {
            return Permission::DESCRIBE_TAG;
          }
          else if (hashCode == ASSOCIATE_TAG_HASH)
          {
            return Permission::ASSOCIATE_TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Permission>(hashCode);
          }

          return Permission::NOT_SET;
        }

        Aws::String GetNameForPermission(Permission enumValue)
        {
          switch(enumValue)
          {
          case Permission::ALL:
            return "ALL";
          case Permission::SELECT:
            return "SELECT";
          case Permission::ALTER:
            return "ALTER";
          case Permission::DROP:
            return "DROP";
          case Permission::DELETE_:
            return "DELETE";
          case Permission::INSERT:
            return "INSERT";
          case Permission::DESCRIBE:
            return "DESCRIBE";
          case Permission::CREATE_DATABASE:
            return "CREATE_DATABASE";
          case Permission::CREATE_TABLE:
            return "CREATE_TABLE";
          case Permission::DATA_LOCATION_ACCESS:
            return "DATA_LOCATION_ACCESS";
          case Permission::CREATE_TAG:
            return "CREATE_TAG";
          case Permission::ALTER_TAG:
            return "ALTER_TAG";
          case Permission::DELETE_TAG:
            return "DELETE_TAG";
          case Permission::DESCRIBE_TAG:
            return "DESCRIBE_TAG";
          case Permission::ASSOCIATE_TAG:
            return "ASSOCIATE_TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionMapper
    } // namespace Model
  } // namespace LakeFormation
} // namespace Aws
