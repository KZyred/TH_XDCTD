/*
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __ERROR_H__
#define __ERROR_H__

typedef enum
{
  // End of comment expected!
  // Không có ký tự kết thúc comment
  ERR_ENDOFCOMMENT,
  // Identification too long!
  // Định danh có độ dài quá lớn
  ERR_IDENTTOOLONG,
  // Invalid const char!
  // const char không hợp lệ
  ERR_INVALIDCHARCONSTANT,
  // Invalid symbol!
  // Ký hiệu không hợp lệ
  ERR_INVALIDSYMBOL,
  // End of string expected!
  // Không có ký tự kết thức xâu
  ERR_ENDOFSTRING,
  // Const string too long!
  // Xâu ký tự quá dài
  ERR_STRINGTOOLONG
} ErrorCode;

#define ERM_ENDOFCOMMENT "End of comment expected!"
#define ERM_IDENTTOOLONG "Identification too long!"
#define ERM_INVALIDCHARCONSTANT "Invalid const char!"
#define ERM_INVALIDSYMBOL "Invalid symbol!"
#define ERM_ENDOFSTRING "End of string expected!"
#define ERM_STRINGTOOLONG "Const string too long!"

// Báo lỗi ra màn hình và vị trí của lỗi
// Và thoát chương trình exit(-1)
void error(ErrorCode err, int lineNo, int colNo);

#endif
