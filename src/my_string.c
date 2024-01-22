#include "my_string.h"

#ifdef __APPLE__
char *apple_error_messages[] = {
    "Undefined error: 0",
    "Operation not permitted",
    "No such file or directory",
    "No such process",
    "Interrupted system call",
    "Input/output error",
    "Device not configured",
    "Argument list too long",
    "Exec format error",
    "Bad file descriptor",
    "No child processes",
    "Resource deadlock avoided",
    "Cannot allocate memory",
    "Permission denied",
    "Bad address",
    "Block device required",
    "Resource busy",
    "File exists",
    "Cross-device link",
    "Operation not supported by device",
    "Not a directory",
    "Is a directory",
    "Invalid argument",
    "Too many open files in system",
    "Too many open files",
    "Inappropriate ioctl for device",
    "Text file busy",
    "File too large",
    "No space left on device",
    "Illegal seek",
    "Read-only file system",
    "Too many links",
    "Broken pipe",
    "Numerical argument out of domain",
    "Result too large",
    "Resource temporarily unavailable",
    "Operation now in progress",
    "Operation already in progress",
    "Socket operation on non-socket",
    "Destination address required",
    "Message too long",
    "Protocol wrong type for socket",
    "Protocol not available",
    "Protocol not supported",
    "Socket type not supported",
    "Operation not supported",
    "Protocol family not supported",
    "Address family not supported by protocol family",
    "Address already in use",
    "Can't assign requested address",
    "Network is down",
    "Network is unreachable",
    "Network dropped connection on reset",
    "Software caused connection abort",
    "Connection reset by peer",
    "No buffer space available",
    "Socket is already connected",
    "Socket is not connected",
    "Can't send after socket shutdown",
    "Too many references: can't splice",
    "Operation timed out",
    "Connection refused",
    "Too many levels of symbolic links",
    "File name too long",
    "Host is down",
    "No route to host",
    "Directory not empty",
    "Too many processes",
    "Too many users",
    "Disc quota exceeded",
    "Stale NFS file handle",
    "Too many levels of remote in path",
    "RPC struct is bad",
    "RPC version wrong",
    "RPC prog. not avail",
    "Program version wrong",
    "Bad procedure for program",
    "No locks available",
    "Function not implemented",
    "Inappropriate file type or format",
    "Authentication error",
    "Need authenticator",
    "Device power is off",
    "Device error",
    "Value too large to be stored in data type",
    "Bad executable (or shared library)",
    "Bad CPU type in executable",
    "Shared library version mismatch",
    "Malformed Mach-o file",
    "Operation canceled",
    "Identifier removed",
    "No message of desired type",
    "Illegal byte sequence",
    "Attribute not found",
    "Bad message",
    "EMULTIHOP (Reserved)",
    "No message available on STREAM",
    "ENOLINK (Reserved)",
    "No STREAM resources",
    "Not a STREAM",
    "Protocol error",
    "STREAM ioctl timeout",
    "Operation not supported on socket",
    "Policy not found",
    "State not recoverable",
    "Previous owner died",
    "Interface output queue is full"};
#elif defined(__linux__)
char *linux_error_messages[] = {
    "Success",
    "Operation not permitted",
    "No such file or directory",
    "No such process",
    "Interrupted system call",
    "Input/output error",
    "No such device or address",
    "Argument list too long",
    "Exec format error",
    "Bad file descriptor",
    "No child processes",
    "Resource temporarily unavailable",
    "Cannot allocate memory",
    "Permission denied",
    "Bad address",
    "Block device required",
    "Device or resource busy",
    "File exists",
    "Invalid cross-device link",
    "No such device",
    "Not a directory",
    "Is a directory",
    "Invalid argument",
    "Too many open files in system",
    "Too many open files",
    "Inappropriate ioctl for device",
    "Text file busy",
    "File too large",
    "No space left on device",
    "Illegal seek",
    "Read-only file system",
    "Too many links",
    "Broken pipe",
    "Numerical argument out of domain",
    "Numerical result out of range",
    "Resource deadlock avoided",
    "File name too long",
    "No locks available",
    "Function not implemented",
    "Directory not empty",
    "Too many levels of symbolic links",
    "Unknown error 41",
    "No message of desired type",
    "Identifier removed",
    "Channel number out of range",
    "Level 2 not synchronized",
    "Level 3 halted",
    "Level 3 reset",
    "Link number out of range",
    "Protocol driver not attached",
    "No CSI structure available",
    "Level 2 halted",
    "Invalid exchange",
    "Invalid request descriptor",
    "Exchange full",
    "No anode",
    "Invalid request code",
    "Invalid slot",
    "Unknown error 58",
    "Bad font file format",
    "Device not a stream",
    "No data available",
    "Timer expired",
    "Out of streams resources",
    "Machine is not on the network",
    "Package not installed",
    "Object is remote",
    "Link has been severed",
    "Advertise error",
    "Srmount error",
    "Communication error on send",
    "Protocol error",
    "Multihop attempted",
    "RFS specific error",
    "Bad message",
    "Value too large for defined data type",
    "Name not unique on network",
    "File descriptor in bad state",
    "Remote address changed",
    "Can not access a needed shared library",
    "Accessing a corrupted shared library",
    ".lib section in a.out corrupted",
    "Attempting to link in too many shared libraries",
    "Cannot exec a shared library directly",
    "Invalid or incomplete multibyte or wide character",
    "Interrupted system call should be restarted",
    "Streams pipe error",
    "Too many users",
    "Socket operation on non-socket",
    "Destination address required",
    "Message too long",
    "Protocol wrong type for socket",
    "Protocol not available",
    "Protocol not supported",
    "Socket type not supported",
    "Operation not supported",
    "Protocol family not supported",
    "Address family not supported by protocol",
    "Address already in use",
    "Cannot assign requested address",
    "Network is down",
    "Network is unreachable",
    "Network dropped connection on reset",
    "Software caused connection abort",
    "Connection reset by peer",
    "No buffer space available",
    "Transport endpoint is already connected",
    "Transport endpoint is not connected",
    "Cannot send after transport endpoint shutdown",
    "Too many references: cannot splice",
    "Connection timed out",
    "Connection refused",
    "Host is down",
    "No route to host",
    "Operation already in progress",
    "Operation now in progress",
    "Stale file handle",
    "Structure needs cleaning",
    "Not a XENIX named type file",
    "No XENIX semaphores available",
    "Is a named type file",
    "Remote I/O error",
    "Disk quota exceeded",
    "No medium found",
    "Wrong medium type",
    "Operation canceled",
    "Required key not available",
    "Key has expired",
    "Key has been revoked",
    "Key was rejected by service",
    "Owner died",
    "State not recoverable",
    "Operation not possible due to RF-kill",
    "Memory page has hardware error",
};
#else
#error "Unsupported platform"
#endif

void *my_memchr(const void *str, int c, my_size_t n) {
  const unsigned char *ptr = (const unsigned char *)str;
  unsigned char ch = (unsigned char)c;

  for (my_size_t i = 0; i < n; i++) {
    if (ptr[i] == ch) {
      return (void *)(ptr + i);
    }
  }
  return my_NULL;
}

int my_memcmp(const void *str1, const void *str2, my_size_t n) {
  const unsigned char *p1 = str1;
  const unsigned char *p2 = str2;
  int result = 0;

  for (my_size_t i = 0; i < n && result == 0; i++) {
    if (p1[i] < p2[i]) {
      result = -1;
    } else if (p1[i] > p2[i]) {
      result = 1;
    }
  }
  return result;
}

void *my_memcpy(void *dest, const void *src, my_size_t n) {
  unsigned char *dst_ptr = (unsigned char *)dest;
  const unsigned char *src_ptr = (const unsigned char *)src;

  for (my_size_t i = 0; i < n; i++) {
    dst_ptr[i] = src_ptr[i];
  }
  return dest;
}

void *my_memset(void *str, int c, my_size_t n) {
  if (str == my_NULL) {
    return my_NULL;
  }

  unsigned char *ptr = (unsigned char *)str;
  unsigned char value = (unsigned char)c;

  for (my_size_t i = 0; i < n; ++i) {
    ptr[i] = value;
  }

  return str;
}

char *my_strncat(char *dest, const char *src, my_size_t n) {
  if (dest == my_NULL || src == my_NULL) {
    return dest;
  }
  my_size_t dest_len = my_strlen(dest);
  char *dest_ptr = dest + dest_len;
  while (n-- > 0 && *src) {
    *dest_ptr++ = *src++;
  }
  *dest_ptr = '\0';
  return dest;
}

char *my_strchr(const char *str, int c) {
  char *result = my_NULL;

  if (str != my_NULL) {
    char ch = (char)c;
    while (*str) {
      if (*str == ch) {
        result = (char *)str;
        break;
      }
      str++;
    }
    if (*str == ch) {
      result = (char *)str;
    }
  }
  return result;
}

int my_strncmp(const char *str1, const char *str2, my_size_t n) {
  if (n == 0) {
    return 0;
  }
  while (n > 0 && *str1 && *str1 == *str2) {
    str1++;
    str2++;
    n--;
  }
  return (signed char)*str1 - (signed char)*str2;
}

char *my_strncpy(char *dest, const char *src, my_size_t n) {
  char *dest_start = dest;
  my_size_t i;
  for (i = 0; i < n && src[i] != '\0'; ++i) {
    dest[i] = src[i];
  }
  for (; i < n; ++i) {
    dest[i] = '\0';
  }
  return dest_start;
}

my_size_t my_strcspn(const char *str1, const char *str2) {
  my_size_t i, j;

  for (i = 0; str1[i] != '\0'; i++) {
    for (j = 0; str2[j] != '\0'; j++) {
      if (str1[i] == str2[j]) {
        return i;
      }
    }
  }
  return i;
}

char *my_strerror(int errnum) {
#ifdef __APPLE__
  char **error_messages = apple_error_messages;
  int num_messages = (int)(sizeof(apple_error_messages) / sizeof(char *));
#elif defined(__linux__)
  char **error_messages = linux_error_messages;
  int num_messages = (int)(sizeof(linux_error_messages) / sizeof(char *));
#else
#error "Unsupported platform"
#endif

  if (errnum >= 0 && errnum < num_messages) {
    return error_messages[errnum];
  }
  static char errbuf[BUFFER];
#ifdef __APPLE__
  my_sprintf(errbuf, "Unknown error: %d", errnum);
#else
  my_sprintf(errbuf, "Unknown error %d", errnum);
#endif
  return errbuf;
}

my_size_t my_strlen(const char *str) {
  const char *end = str;
  while (*end) {
    end++;
  }
  return end - str;
}

char *my_strpbrk(const char *str1, const char *str2) {
  char *result = my_NULL;

  if (str1 != my_NULL && str2 != my_NULL) {
    for (const char *s1 = str1; *s1 != '\0' && result == my_NULL; s1++) {
      for (const char *s2 = str2; *s2 != '\0'; s2++) {
        if (*s1 == *s2) {
          result = (char *)s1;
          break;
        }
      }
    }
  }
  return result;
}

char *my_strrchr(const char *str, int c) {
  char *result = my_NULL;

  if (str != my_NULL) {
    const char *last_occurrence = my_NULL;
    char current_char;

    while ((current_char = *str) != '\0') {
      if (current_char == (char)c) {
        last_occurrence = str;
      }
      str++;
    }

    result = (char *)last_occurrence;
  }
  return result;
}

char *my_strstr(const char *haystack, const char *needle) {
  char *result = my_NULL;

  if (!*needle) {
    result = (char *)haystack;
  } else {
    while (*haystack && !result) {
      const char *haystack_ptr = haystack;
      const char *needle_ptr = needle;
      while (*haystack_ptr == *needle_ptr && *needle_ptr) {
        haystack_ptr++;
        needle_ptr++;
      }
      if (!*needle_ptr) {
        result = (char *)haystack;
      }
      haystack++;
    }
  }
  return result;
}

my_size_t my_strspn(const char *str1, const char *str2) {
  my_size_t length = 0;

  if (str1 != my_NULL && str2 != my_NULL) {
    while (*str1 != '\0') {
      if (my_strchr(str2, *str1) != my_NULL) {
        length++;
        str1++;
      } else {
        break;
      }
    }
  }
  return length;
}

char *my_strtok(char *str, const char *delim) {
  static char *my_token = my_NULL;
  char *result = my_NULL;
  if (str != my_NULL) {
    my_token = str;
  }
  if (my_token == my_NULL) {
    return my_NULL;
  }
  my_token += my_strspn(my_token, delim);
  if (*my_token == '\0') {
    my_token = my_NULL;
  } else {
    char *token_end = my_token + my_strcspn(my_token, delim);
    if (*token_end == '\0') {
      result = my_token;
      my_token = my_NULL;
    } else {
      *token_end = '\0';
      result = my_token;
      my_token = token_end + 1;
    }
  }

  return result;
}

char *my_strcpy(char *dest, const char *src) {
  char *dest_start = dest;
  while (*src) {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return dest_start;
}

void *my_memmove(void *dest, const void *src, my_size_t n) {
  unsigned char *dst_ptr = (unsigned char *)dest;
  const unsigned char *src_ptr = (const unsigned char *)src;

  if (dst_ptr == src_ptr || n == 0) {
    return dest;
  }

  if (dst_ptr < src_ptr) {
    for (my_size_t i = 0; i < n; i++) {
      dst_ptr[i] = src_ptr[i];
    }
  } else {
    for (my_size_t i = n; i > 0; i--) {
      dst_ptr[i - 1] = src_ptr[i - 1];
    }
  }

  return dest;
}

// ----Part 4-----
void *my_to_upper(const char *str) {
  char *result = NULL;
  if (str != NULL) {
    int as_result = asprintf(&result, "%s", str);
    if (as_result != -1) {
      for (int i = 0; result[i] != '\0'; i++) {
        if (result[i] >= 'a' && result[i] <= 'z') {
          result[i] -= 32;
        }
      }
    }
  }
  return result;
}

void *my_to_lower(const char *str) {
  char *result = NULL;
  if (str != NULL) {
    int as_result = asprintf(&result, "%s", str);
    if (as_result != -1) {
      for (int i = 0; result[i] != '\0'; i++) {
        if (result[i] >= 'A' && result[i] <= 'Z') {
          result[i] += 32;
        }
      }
    }
  }
  return result;
}

void *my_insert(const char *src, const char *str, my_size_t start_index) {
  char *result = NULL;
  if (src != NULL && str != NULL) {
    my_size_t size_src = my_strlen(src);
    my_size_t size_str = my_strlen(str);
    if (start_index > 0 && start_index < size_src) {
      result = calloc(size_src + size_str + 1, sizeof(char));
      for (my_size_t i = 0, j = 0, k = 0; src[i] != '\0'; i++) {
        if (i == start_index && size_str > 0)
          while (str[k] != '\0') result[j++] = str[k++];
        result[j++] = src[i];
      }
    }
  }
  return result;
}

void *my_trim(const char *src, const char *trim_chars) {
  char *result = NULL;
  if (src != NULL && trim_chars != NULL) {
    while (my_strchr(trim_chars, *src)) src++;
    asprintf(&result, "%s", src);
    int end = my_strlen(src) - 1;
    while (my_strchr(trim_chars, result[end])) {
      result[end--] = '\0';
    }
  }
  return result;
}