int __fastcall sub_225918(int a1, const char *a2)
{
  _DWORD *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  char *v6; // r4
  _DWORD *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0

  v3 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v3, "-> %s->to_log_command (...)\n", (const char *)dword_489C90);
  v4 = off_489DBC(&unk_489C8C, a2);
  v5 = (_DWORD *)sub_242FF0(v4);
  sub_2594D8(*v5, "<- %s->to_log_command (", (const char *)dword_489C90);
  v6 = sub_98F14((int)&unk_489C8C);
  v7 = (_DWORD *)sub_242FF0(v6);
  v8 = sub_256878(v6, *v7);
  v9 = (_DWORD *)sub_242FF0(v8);
  v10 = sub_256878(", ", *v9);
  if ( !a2 )
    a2 = "(null)";
  v11 = (_DWORD *)sub_242FF0(v10);
  v12 = sub_256878(a2, *v11);
  v13 = (_DWORD *)sub_242FF0(v12);
  return sub_256878(")\n", *v13);
}
