/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include "actions/no_audit_log.h"

#include <iostream>
#include <string>

#include "modsecurity/assay.h"

namespace ModSecurity {
namespace actions {

bool NoAuditLog::evaluate(Assay *assay) {
    assay->do_not_save_in_auditlog = true;
    return true;
}

}  // namespace actions
}  // namespace ModSecurity