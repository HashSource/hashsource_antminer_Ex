int __fastcall sub_1D4A14(int a1)
{
  int v1; // r4
  _DWORD *v3; // r0

  if ( dword_487D4C )
  {
    v3 = (_DWORD *)sub_242FF0(a1);
    sub_2594D8(*v3, "[record-btrace] require\n");
  }
  v1 = sub_23E430(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
  if ( !v1 )
    sub_94708("No thread.");
  sub_23F7B0();
  sub_E39EC(v1);
  if ( sub_E1F68(v1) )
    sub_94708("No trace.");
  return v1;
}
