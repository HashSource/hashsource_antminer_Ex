unsigned int *__fastcall sub_24504(int a1)
{
  int v2; // r4
  unsigned int *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r1

  v2 = 0;
  v3 = (unsigned int *)sub_15D2A4(16);
  v3[3] = sub_250C78(a1);
  sub_24108(a1, v3);
  *v3 = sub_15ECD4(a1, 13);
  while ( 1 )
  {
    v4 = sub_15ECDC(a1);
    if ( v2 >= ((int (__fastcall *)(int))loc_166EC4)(v4) )
      break;
    v5 = sub_250CA0(v3[3], v2);
    v6 = 16 * v2++;
    if ( v5 )
      *(_QWORD *)(v3[3] + v6) += *v3;
  }
  return v3;
}
