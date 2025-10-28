int __fastcall sub_20F1DC(int result, void (__fastcall *a2)(int, int, int), int a3)
{
  _DWORD *v3; // r4

  v3 = (_DWORD *)result;
  if ( result )
  {
    do
    {
      result = sub_20C4B8(v3, a2, a3);
      if ( v3[2] )
        break;
      v3 = (_DWORD *)v3[3];
    }
    while ( v3 );
  }
  return result;
}
