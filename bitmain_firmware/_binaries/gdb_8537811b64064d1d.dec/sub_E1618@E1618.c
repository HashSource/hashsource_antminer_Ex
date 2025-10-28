void __fastcall sub_E1618(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6

  *a1 = 0;
  v4 = sub_92564((int)&loc_E0854, (int)a1);
  if ( sub_274CC4("btrace", "btrace.dtd", &off_388DDC, a2, a1) )
    sub_94708("Error parsing branch trace.");
  sub_92668(v4);
}
