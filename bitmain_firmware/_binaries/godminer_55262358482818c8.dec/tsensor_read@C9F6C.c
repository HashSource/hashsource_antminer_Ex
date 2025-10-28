int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r0
  int reg; // r8
  int v10; // r8
  const char *v11; // r2
  int v12; // r2
  const char *v13; // r2
  int v14; // r1
  const char *v15; // r2
  int v16; // r1
  const char *v17; // r2
  unsigned __int8 v18; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v19; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v21[4072]; // [sp+818h] [bp-1000h] BYREF

  v19 = a2;
  v18 = a3;
  if ( a1 > 0xF )
  {
    LOWORD(v15) = 26892;
    HIWORD(v15) = (unsigned int)"write" >> 16;
    reg = -2147482111;
    snprintf(s, 0x800u, v15, a1);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v16) = 26932;
    HIWORD(v16) = (unsigned int)"ram, input chain is %d" >> 16;
    zlog(g_zc, v16, 175, "tsensor_read", 12, 155, 100, v21);
    return reg;
  }
  v7 = sub_C98D0(a1, v19);
  if ( v7 != -2147482112 )
    goto LABEL_3;
  v10 = tsensor_open(a1, &v19, 1u);
  if ( v10 < 0 )
  {
    LOWORD(v13) = 27200;
    HIWORD(v13) = (unsigned int)"is %d,slave addr is %d" >> 16;
    snprintf(s, 0x800u, v13, a1, v19);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 164;
    goto LABEL_9;
  }
  v7 = sub_C98D0(a1, v19);
  if ( v7 == -2147482112 )
  {
    LOWORD(v11) = 27200;
    HIWORD(v11) = (unsigned int)"is %d,slave addr is %d" >> 16;
    snprintf(s, 0x800u, v11, a1, v19);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 171;
  }
  else
  {
LABEL_3:
    reg = iic_read_reg(*(_DWORD *)&byte_1B37E0[68 * a1 + 8 + 8 * v7], (int)&v18, 2, a4, a5);
    if ( reg == a5 )
      return reg;
    LOWORD(v17) = 27324;
    HIWORD(v17) = (unsigned int)"%d, slave: %d, addr: %d" >> 16;
    v10 = -2147482112;
    snprintf(s, 0x800u, v17, a1, v19, v18);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 196;
  }
LABEL_9:
  LOWORD(v14) = 26932;
  HIWORD(v14) = (unsigned int)"ram, input chain is %d" >> 16;
  zlog(g_zc, v14, 175, "tsensor_read", 12, v12, 100, v21);
  return v10;
}
