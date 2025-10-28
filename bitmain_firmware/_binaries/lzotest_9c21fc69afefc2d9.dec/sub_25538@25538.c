int __fastcall sub_25538(int result, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r3

  v3 = *a2;
  if ( *a2 <= 3 || *a3 <= 0x800u )
    return result;
  if ( v3 <= 9 )
  {
    result += 4 * v3;
    v4 = v3 - 1;
    if ( (unsigned int)(*(_DWORD *)(result + 40) - 1) >= 0x800 )
      return result;
    goto LABEL_9;
  }
  if ( *a3 <= 0x4000u )
    return result;
  if ( v3 == 10 )
  {
    if ( (unsigned int)(*(_DWORD *)(result + 76) - 1) < 0x800 )
    {
      *a2 = 8;
      *a3 = *(_DWORD *)(result + 76);
      return result;
    }
  }
  else if ( v3 > 0x22 )
  {
    return result;
  }
  result += 4 * v3;
  v4 = v3 - 1;
  if ( (unsigned int)(*(_DWORD *)(result + 40) - 1) < 0x4000 )
  {
LABEL_9:
    *a2 = v4;
    *a3 = *(_DWORD *)(result + 40);
  }
  return result;
}
