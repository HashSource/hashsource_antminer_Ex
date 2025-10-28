void __fastcall sub_3057C(int a1, _DWORD *ptr)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4

  if ( ptr[10] )
  {
    sub_323BAC();
    ptr[10] = 0;
  }
  v3 = (_DWORD *)ptr[11];
  if ( v3 )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      sub_200A58();
      v3 = v4;
    }
    while ( v4 );
  }
  free(ptr);
}
