int __fastcall blake2s_init_key(_DWORD *a1, unsigned __int8 a2, const void *a3, unsigned __int8 a4)
{
  char s[64]; // [sp+10h] [bp-64h] BYREF
  _BYTE v10[4]; // [sp+50h] [bp-24h] BYREF
  int v11; // [sp+54h] [bp-20h] BYREF
  _BYTE v12[24]; // [sp+58h] [bp-1Ch] BYREF

  if ( !a2 || a2 > 0x20u )
    return -1;
  if ( !a3 || !a4 || a4 > 0x20u )
    return -1;
  v10[0] = a2;
  v10[1] = a4;
  v10[2] = 1;
  v10[3] = 1;
  sub_22E72C(&v11, 0);
  sub_22E7DC((int)v12, 0);
  memset(&v12[6], 0, 18);
  if ( blake2s_init_param(a1, (int)v10) < 0 )
    return -1;
  memset(s, 0, sizeof(s));
  memcpy(s, a3, a4);
  blake2s_update(a1, s, 0x40u);
  sub_22E90C(s, 64);
  return 0;
}
