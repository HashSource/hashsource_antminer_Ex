void sub_D4148()
{
  _DWORD *v0; // r7
  int v1; // r0

  v0 = (_DWORD *)sub_25B32C();
  do
  {
    if ( sub_98FA0(&dword_4878EC, &dword_475848) )
      break;
    if ( !sub_22EBE4(0) )
      break;
    if ( sub_23F1EC(dword_4878EC, dword_4878F0, dword_4878F4) )
      break;
    if ( ((int (__fastcall *)(int, int, int))loc_23F224)(dword_4878EC, dword_4878F0, dword_4878F4) )
      break;
    v1 = ((int (*)(void))loc_23DC0C)();
  }
  while ( sub_D3D84((_DWORD *)(v1 + 136)) );
  sub_92668(v0);
}
