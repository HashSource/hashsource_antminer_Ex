int __fastcall sub_E6594(int result, int a2)
{
  _DWORD *v2; // r6
  int v3; // r7

  v2 = (_DWORD *)result;
  if ( result )
  {
    if ( !*(_DWORD *)(dword_4788DC + 12) )
    {
      v3 = *(_DWORD *)(result + 4);
      if ( v3 )
      {
        result = v3 + strlen(*(const char **)(result + 4));
        if ( *(_BYTE *)(result - 1) == 47 )
        {
          *(_DWORD *)(dword_4788DC + 12) = v3;
          v2[1] = sub_32727C(a2);
          sub_E6560(a2);
          result = sub_212E10(v2[1]);
          v2[5] = result;
          if ( !result )
          {
            if ( *v2 )
              v2[5] = *(_DWORD *)(*v2 + 20);
          }
        }
      }
    }
  }
  return result;
}
