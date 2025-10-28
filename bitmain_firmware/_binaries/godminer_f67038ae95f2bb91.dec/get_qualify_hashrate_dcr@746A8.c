int __fastcall get_qualify_hashrate_dcr(int a1, double *a2)
{
  int result; // r0
  double v5; // [sp+0h] [bp-Ch] BYREF

  v5 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v5);
  if ( *(_BYTE *)(a1 + 304) != 68 )
    return 25;
  if ( *(_BYTE *)(a1 + 305) != 82 )
    return 25;
  if ( *(_BYTE *)(a1 + 306) != 55 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 307);
  if ( *(_BYTE *)(a1 + 307) )
    return 25;
  *a2 = v5 * 0.994;
  return result;
}
