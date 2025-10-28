int __fastcall get_sale_hashrate_kas(int a1, double *a2, _DWORD *a3)
{
  float v3; // s0
  double v8; // [sp+10h] [bp-14h] BYREF
  float v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-8h]

  v10 = 0;
  v8 = 0.0;
  v9 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 148))(a1, &v8);
  if ( strcmp((const char *)(a1 + 340), "KS3") )
    return 25;
  sub_173760(a1);
  v9 = v3;
  *a2 = v3 * v8;
  *a3 = 100;
  return v10;
}
