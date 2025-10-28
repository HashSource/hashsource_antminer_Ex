int __fastcall blake2b_init_key(void *a1, unsigned __int8 a2, const void *a3, unsigned __int8 a4)
{
  char s[128]; // [sp+10h] [bp-C4h] BYREF
  _BYTE v10[4]; // [sp+90h] [bp-44h] BYREF
  int v11; // [sp+94h] [bp-40h] BYREF
  _BYTE v12[56]; // [sp+98h] [bp-3Ch] BYREF

  if ( !a2 || a2 > 0x40u )
    return -1;
  if ( !a3 || !a4 || a4 > 0x40u )
    return -1;
  v10[0] = a2;
  v10[1] = a4;
  v10[2] = 1;
  v10[3] = 1;
  sub_233A30(&v11, 0);
  sub_233AE0((int)v12, 0);
  memset(&v12[8], 0, 48);
  if ( blake2b_init_param(a1, (int)v10) < 0 )
    return -1;
  memset(s, 0, sizeof(s));
  memcpy(s, a3, a4);
  equihash_blake2b_update((int)a1, s, 0x80u);
  sub_233CF4(s, 0x80u);
  return 0;
}
