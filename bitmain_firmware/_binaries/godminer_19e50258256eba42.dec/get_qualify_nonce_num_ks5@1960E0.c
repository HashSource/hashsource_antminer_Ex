int __fastcall get_qualify_nonce_num_ks5(int a1, float *a2)
{
  double v2; // d8
  int v3; // r1
  __int64 v4; // r0
  double v5; // r0
  float v6; // s15
  double v10; // [sp+8h] [bp-24h] BYREF
  int v11; // [sp+14h] [bp-18h]

  v11 = 0;
  v10 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 148))(a1, &v10);
  v2 = v10;
  v3 = *(_DWORD *)(a1 + 472);
  LODWORD(v4) = 1 << v3;
  HIDWORD(v4) = (1 << (v3 - 32)) | (1u >> (32 - v3));
  LODWORD(v5) = sub_345474(v4);
  v6 = v2 / v5 / 92.0 * 0.1;
  *a2 = v6;
  return v11;
}
