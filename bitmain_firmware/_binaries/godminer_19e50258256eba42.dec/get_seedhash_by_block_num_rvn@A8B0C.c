_DWORD *__fastcall get_seedhash_by_block_num_rvn(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  _DWORD s[8]; // [sp+10h] [bp-34h] BYREF
  unsigned __int64 v14; // [sp+30h] [bp-14h]
  unsigned int i; // [sp+3Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  LODWORD(v3) = sub_34579C(a2, 0xEA60u);
  v14 = v3;
  for ( i = 0; v14 > i; ++i )
    sub_A7960((int)s, (int)s, 0x20u);
  v4 = s[1];
  v5 = s[2];
  v6 = s[3];
  *a1 = s[0];
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  v7 = s[5];
  v8 = s[6];
  v9 = s[7];
  a1[4] = s[4];
  a1[5] = v7;
  a1[6] = v8;
  a1[7] = v9;
  return a1;
}
