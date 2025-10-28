int __fastcall tsensor_write(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r8
  unsigned __int8 *v10; // r6
  int v11; // r0
  int v12; // r3
  const char *v13; // r2
  int v14; // r6
  int v15; // r2
  int v16; // r1
  const char *v18; // r2
  int v19; // r2
  const char *v20; // r2
  int v21; // r1
  const char *v22; // r2
  unsigned __int8 v23[8]; // [sp+17h] [bp-1809h] BYREF
  unsigned __int8 v24; // [sp+1Fh] [bp-1801h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v26[4096]; // [sp+820h] [bp-1000h] BYREF

  v23[0] = a2;
  if ( a1 > 0xF )
  {
    LOWORD(v22) = 26892;
    HIWORD(v22) = (unsigned int)"write" >> 16;
    LOWORD(v14) = 1537;
    snprintf(s, 0x800u, v22, a1);
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, s);
    V_UNLOCK();
    v15 = 112;
LABEL_8:
    LOWORD(v16) = 26932;
    HIWORD(v16) = (unsigned int)"ram, input chain is %d" >> 16;
    HIWORD(v14) = 0x8000;
    zlog(g_zc, v16, 175, "tsensor_write", 13, v15, 100, v26);
    return v14;
  }
  v8 = sub_C98D0(a1, v23[0]);
  if ( v8 == -2147482112 )
  {
    v14 = tsensor_open(a1, v23, 1u);
    if ( v14 < 0 )
    {
      LOWORD(v20) = 27200;
      HIWORD(v20) = (unsigned int)"is %d,slave addr is %d" >> 16;
      snprintf(s, 0x800u, v20, a1, v23[0]);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      v19 = 121;
    }
    else
    {
      v8 = sub_C98D0(a1, v23[0]);
      if ( v8 != -2147482112 )
        goto LABEL_3;
      LOWORD(v18) = 27200;
      HIWORD(v18) = (unsigned int)"is %d,slave addr is %d" >> 16;
      snprintf(s, 0x800u, v18, a1, v23[0]);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, s);
      V_UNLOCK();
      v19 = 128;
    }
    LOWORD(v21) = 26932;
    HIWORD(v21) = (unsigned int)"ram, input chain is %d" >> 16;
    zlog(g_zc, v21, 175, "tsensor_write", 13, v19, 100, v26);
    return v14;
  }
LABEL_3:
  if ( a5 )
  {
    v9 = a4 + a5;
    v10 = &byte_1B37E0[68 * a1 + 8 * v8];
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 2);
      v12 = a4;
      v24 = a3;
      ++a4;
      ++a3;
      if ( iic_write_reg(v11, (char *)&v24, 1, v12, 1) != 1 )
        break;
      if ( a4 == v9 )
        return a5;
    }
    LOWORD(v13) = 27264;
    HIWORD(v13) = (unsigned int)"ave_addr %d open failed" >> 16;
    LOWORD(v14) = 1536;
    snprintf(s, 0x800u, v13, a1, v23[0], v24);
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, s);
    V_UNLOCK();
    v15 = 140;
    goto LABEL_8;
  }
  return a5;
}
