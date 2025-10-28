int __fastcall sub_E0A70(_BYTE *a1)
{
  int v1; // r0
  int v2; // r5
  int *v3; // r0
  int *v4; // r4
  char *v5; // r0
  int result; // r0
  _DWORD *v7; // r1

  if ( a1 && *a1 )
    sub_94708("Invalid argument.");
  v1 = sub_23E430(dword_4878EC, dword_4878F0, dword_4878F4);
  v2 = v1;
  if ( !v1 )
    sub_94708("No thread.");
  if ( !*(_DWORD *)(v1 + 252) || (v3 = (int *)sub_232644(), (v4 = v3) == 0) )
    sub_94708("No btrace configuration.");
  v5 = sub_91C6C(*v3);
  result = sub_259880("Format: %s.\n", v5);
  if ( *v4 == 1 )
  {
    v7 = *(_DWORD **)(v2 + 260);
    if ( v7 )
      v7 = (_DWORD *)*v7;
    return sub_259880("Number of packets: %u.\n", v7);
  }
  return result;
}
