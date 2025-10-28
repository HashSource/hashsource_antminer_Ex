int __fastcall target_to_double_diff_kda(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3
  __uint64_t v8; // [sp+8h] [bp-24h] BYREF
  int v9; // [sp+10h] [bp-1Ch]
  int v10; // [sp+14h] [bp-18h]
  int v11; // [sp+18h] [bp-14h]
  int v12; // [sp+1Ch] [bp-10h]
  int v13; // [sp+20h] [bp-Ch]
  int v14; // [sp+24h] [bp-8h]

  v1 = a1[1];
  v2 = a1[2];
  v3 = a1[3];
  LODWORD(v8) = *a1;
  HIDWORD(v8) = v1;
  v9 = v2;
  v10 = v3;
  v4 = a1[5];
  v5 = a1[6];
  v6 = a1[7];
  v11 = a1[4];
  v12 = v4;
  v13 = v5;
  v14 = v6;
  sub_A5730((char *)&v8, 32);
  return le256_target_to_double_diff_base(&v8);
}
