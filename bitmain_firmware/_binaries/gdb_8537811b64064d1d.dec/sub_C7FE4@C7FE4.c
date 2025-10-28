int __fastcall sub_C7FE4(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v9; // r0

  v2 = (_DWORD *)sub_243004(a1);
  v4 = *v2;
  v5 = a1[3] - 6;
  switch ( a1[3] )
  {
    case 6:
      sub_2573A8(*v2, "Watchpoint ", v3, v5);
      break;
    case 7:
      sub_2573A8(*v2, "Hardware watchpoint ", v3, v5);
      break;
    case 8:
      sub_2573A8(*v2, "Hardware read watchpoint ", v3, v5);
      break;
    case 9:
      sub_2573A8(*v2, "Hardware access (read/write) watchpoint ", v3, v5);
      break;
    default:
      sub_94728((int)"breakpoint.c", 10364, "Invalid hardware watchpoint type.");
      v9 = sub_257374(v4, 0);
      sub_339024(v9);
  }
  sub_2578D4(v4, 0);
  sub_25752C(v4, "number", a1[6]);
  sub_2573A8(v4, &word_3B6A28, v6, v7);
  sub_257610(v4, "exp", a1[34]);
  return sub_257374(v4, 0);
}
