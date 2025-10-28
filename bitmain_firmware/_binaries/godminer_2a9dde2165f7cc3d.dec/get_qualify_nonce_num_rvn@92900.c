int __fastcall get_qualify_nonce_num_rvn(int a1, _DWORD *a2)
{
  double v4; // d7
  double v6; // [sp+0h] [bp-Ch] BYREF

  v6 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v6);
  v4 = sub_12E60C(
         1 << *(_DWORD *)(a1 + 400),
         (1 << (*(_DWORD *)(a1 + 400) - 32)) | (1u >> (32 - *(_DWORD *)(a1 + 400))));
  *(float *)&v4 = v6 / v4 * 0.125 * 0.3;
  *a2 = LODWORD(v4);
  return 0;
}
