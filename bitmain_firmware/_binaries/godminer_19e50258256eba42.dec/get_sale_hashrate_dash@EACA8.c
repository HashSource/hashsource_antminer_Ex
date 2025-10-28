int __fastcall get_sale_hashrate_dash(int a1, double *a2, _DWORD *a3)
{
  double v7; // [sp+10h] [bp-14h] BYREF
  int v8; // [sp+1Ch] [bp-8h]

  v8 = 0;
  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 148))(a1, &v7);
  if ( strcmp((const char *)(a1 + 340), "D9") )
    return 25;
  *a2 = v7 * 0.977;
  *a3 = 10;
  return v8;
}
