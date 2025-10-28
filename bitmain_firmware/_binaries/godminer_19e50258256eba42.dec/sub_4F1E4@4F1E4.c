_DWORD *__fastcall sub_4F1E4(_DWORD *result, int a2)
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    --result[9];
    if ( a2 == 10 )
    {
      --result[6];
      result[7] = result[8];
    }
    else
    {
      result = (_DWORD *)utf8_check_first(a2);
      if ( result )
        --v2[7];
    }
    --v2[4];
  }
  return result;
}
