void __fastcall sub_27D02C(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r0

  v1 = (_DWORD *)a1;
  if ( a1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      v3 = sub_16F67C(a1);
      ((void (__fastcall *)(int, _DWORD, _DWORD))loc_16E814)(v3, v1[1], v1[2]);
      free(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
