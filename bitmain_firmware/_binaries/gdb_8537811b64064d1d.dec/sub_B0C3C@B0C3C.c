int __fastcall sub_B0C3C(_BYTE *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r3
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v14; // r1

  v2 = *(_DWORD *)sub_243004(a1);
  v3 = ((int (*)(void))loc_B076C)();
  if ( !v3 )
    return sub_2573B4(v2, "Your application does not use any Ada tasks.\n");
  if ( a1 && *a1 )
  {
    v5 = sub_1836B0(v3);
    v6 = sub_14CC94(a1);
    v7 = sub_26EB44(v6);
    v8 = sub_AFB14(v5);
    if ( v7 <= 0 || (v9 = *(_DWORD **)(v8 + 20)) == 0 || *v9 < (unsigned int)v7 )
      sub_94708("Task ID %d not known.  Use the \"info tasks\" command to\nsee the IDs of currently known tasks", v7);
    if ( *v9 <= (unsigned int)(v7 - 1) )
    {
      sub_15BA0(1308);
    }
    else
    {
      v10 = &v9[75 * v7 - 73];
      if ( v9[75 * v7 - 4] == 2 )
        sub_94708("Cannot switch to task %d: Task is no longer running", v7);
      sub_231ECC();
      if ( sub_23E430(*v10, v10[1], v10[2]) )
      {
        sub_23FA18(*v10, v10[1], v10[2]);
        v11 = sub_15F810(0);
        sub_A34C8(v11);
        sub_259F38("[Switching to task %d]\n", v7);
        v12 = sub_15F810(0);
        v13 = sub_15F810(0);
        v14 = sub_15DAA4(v13);
        return sub_20E810(v12, v14, 1);
      }
    }
    sub_94708("Unable to compute thread ID for task %d.\nCannot switch to this task.", v7);
  }
  v4 = ((int (__fastcall *)(int, int, int))loc_AFCE4)(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( v4 )
    return sub_259F38("[Current task is %d]\n", v4);
  else
    return sub_259F38("[Current task is unknown]\n");
}
