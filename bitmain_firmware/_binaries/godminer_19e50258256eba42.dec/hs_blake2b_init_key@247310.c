int __fastcall hs_blake2b_init_key(_DWORD *a1, unsigned int a2, const void *a3, size_t a4)
{
  char s[128]; // [sp+10h] [bp-C4h] BYREF
  unsigned __int8 v10[4]; // [sp+90h] [bp-44h] BYREF
  int v11; // [sp+94h] [bp-40h] BYREF
  int v12; // [sp+98h] [bp-3Ch] BYREF
  int v13; // [sp+9Ch] [bp-38h] BYREF
  char v14; // [sp+A0h] [bp-34h]
  char v15; // [sp+A1h] [bp-33h]
  _BYTE v16[46]; // [sp+A2h] [bp-32h] BYREF

  if ( !a2 || a2 > 0x40 )
    return -1;
  if ( !a3 || !a4 || a4 > 0x40 )
    return -1;
  v10[0] = a2;
  v10[1] = a4;
  v10[2] = 1;
  v10[3] = 1;
  sub_246E80(&v11, 0);
  sub_246E80(&v12, 0);
  sub_246E80(&v13, 0);
  v14 = 0;
  v15 = 0;
  memset(v16, 0, sizeof(v16));
  if ( hs_blake2b_init_param(a1, v10) < 0 )
    return -1;
  memset(s, 0, sizeof(s));
  memcpy(s, a3, a4);
  hs_blake2b_update((int)a1, s, 0x80u);
  sub_246F68(s, 0x80u);
  return 0;
}
