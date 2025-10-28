unsigned __int8 *__fastcall sub_341984(unsigned __int8 *result, char *a2, unsigned int a3)
{
  unsigned __int8 *v5; // [sp+10h] [bp-Ch]
  unsigned int n; // [sp+14h] [bp-8h]

  v5 = result;
  while ( a3 )
  {
    n = 64 - *((_DWORD *)v5 + 16);
    if ( n > a3 )
      n = a3;
    result = (unsigned __int8 *)memcpy(&v5[*((_DWORD *)v5 + 16)], a2, n);
    a2 += n;
    a3 -= n;
    *((_DWORD *)v5 + 16) += n;
    if ( *((_DWORD *)v5 + 16) == 64 )
    {
      result = (unsigned __int8 *)sub_32DD20(v5, 0);
      *((_DWORD *)v5 + 16) = 0;
      if ( !++*((_DWORD *)v5 + 33) )
        ++*((_DWORD *)v5 + 34);
    }
  }
  return result;
}
