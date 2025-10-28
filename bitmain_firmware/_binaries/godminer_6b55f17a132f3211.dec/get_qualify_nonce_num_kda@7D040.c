int __fastcall get_qualify_nonce_num_kda(int a1, float *a2)
{
  double v4; // d4
  float v6; // s14
  double v7; // [sp+0h] [bp-Ch] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v7);
  v4 = sub_122004(
         1 << *(_DWORD *)(a1 + 392),
         (1 << (*(_DWORD *)(a1 + 392) - 32)) | (1u >> (32 - *(_DWORD *)(a1 + 392))),
         1,
         1 << (*(_DWORD *)(a1 + 392) - 32));
  v6 = v7 / v4 / 92.0 * 0.4;
  *a2 = v6;
  return 0;
}
