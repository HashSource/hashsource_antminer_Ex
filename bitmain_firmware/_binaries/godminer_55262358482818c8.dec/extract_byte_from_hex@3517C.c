int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  const __int32_t **v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r4
  int v8; // r4
  int v9; // r3
  int v10; // r1
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r1
  char v18[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( (strlen(a1) & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v12) = -30252;
    HIWORD(v12) = (unsigned int)"'%s' is out of range" >> 16;
    logfmt_raw(v18, 0x1000u, 0, v12, a1);
    V_UNLOCK();
    LOWORD(v13) = -30416;
    HIWORD(v13) = (unsigned int)"'%s' is not a number" >> 16;
    zlog(g_zc, v13, 137, "extract_byte_from_hex", 21, 24, 100, v18);
  }
  v4 = _ctype_tolower_loc();
  v5 = LOBYTE((*v4)[(unsigned __int8)a1[a2]]);
  v6 = LOBYTE((*v4)[(unsigned __int8)a1[a2 + 1]]);
  if ( (unsigned int)(v5 - 97) > 5 && (unsigned int)(v5 - 48) > 9 )
  {
    V_LOCK();
    LOWORD(v16) = -30220;
    HIWORD(v16) = (unsigned int)" hex %s is not valid!" >> 16;
    logfmt_raw(v18, 0x1000u, 0, v16, v5);
    V_UNLOCK();
    LOWORD(v17) = -30416;
    HIWORD(v17) = (unsigned int)"'%s' is not a number" >> 16;
    zlog(g_zc, v17, 137, "extract_byte_from_hex", 21, 31, 100, v18);
  }
  if ( (unsigned int)(v6 - 97) > 5 && (unsigned int)(v6 - 48) > 9 )
  {
    V_LOCK();
    LOWORD(v14) = -30220;
    HIWORD(v14) = (unsigned int)" hex %s is not valid!" >> 16;
    logfmt_raw(v18, 0x1000u, 0, v14, v6);
    V_UNLOCK();
    LOWORD(v15) = -30416;
    HIWORD(v15) = (unsigned int)"'%s' is not a number" >> 16;
    zlog(g_zc, v15, 137, "extract_byte_from_hex", 21, 34, 100, v18);
  }
  v7 = 16 * sub_35008(v5);
  v8 = v7 + sub_35008(v6);
  if ( v8 > 255 )
  {
    V_LOCK();
    LOWORD(v9) = -30188;
    HIWORD(v9) = (unsigned int)"acter %d is not valid!" >> 16;
    logfmt_raw(v18, 0x1000u, 0, v9, a1, a2);
    V_UNLOCK();
    LOWORD(v10) = -30416;
    HIWORD(v10) = (unsigned int)"'%s' is not a number" >> 16;
    zlog(g_zc, v10, 137, "extract_byte_from_hex", 21, 41, 100, v18);
  }
  return (unsigned __int8)v8;
}
