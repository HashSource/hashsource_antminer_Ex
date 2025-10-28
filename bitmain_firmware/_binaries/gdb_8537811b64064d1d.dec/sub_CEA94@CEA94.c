int __fastcall sub_CEA94(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r3
  char *v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  char *v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  char *v20; // r0
  char *v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r0
  _DWORD v25[3]; // [sp+Ch] [bp-1Ch] BYREF
  char v26; // [sp+18h] [bp-10h] BYREF

  v2 = *(_DWORD *)sub_243004(a1);
  if ( !a1[1] )
  {
    sub_94728(
      (int)"breakpoint.c",
      10255,
      "%s: Assertion `%s' failed.",
      "print_stop_action print_it_watchpoint(bpstat)",
      "bs->bp_location_at != NULL");
    sub_257374(v2, 0);
    v24 = sub_2564A0(v25);
    sub_339024(v24);
  }
  v3 = (_DWORD *)a1[2];
  sub_B7514(v3[6]);
  sub_CE2B0(v2);
  sub_256788(v25);
  v26 = 0;
  v4 = v3[3];
  v25[2] = 0;
  v25[0] = &off_3F294C;
  v25[1] = &v26;
  switch ( v4 )
  {
    case 6:
    case 7:
      if ( sub_257418(v2) )
      {
        v5 = sub_98384(1);
        sub_257610(v2, "reason", v5);
      }
      sub_C7A2C((int)v3);
      sub_2578D4(v2, 0);
      sub_2573A8(v2, "\nOld value = ", v6, v7);
      sub_C8D48(a1[5], (int)v25);
      sub_257684(v2, "old", v25);
      sub_2573A8(v2, "\nNew value = ", v8, v9);
      sub_C8D48(v3[40], (int)v25);
      sub_257684(v2, "new", v25);
      goto LABEL_6;
    case 8:
      if ( sub_257418(v2) )
      {
        v20 = sub_98384(2);
        sub_257610(v2, "reason", v20);
      }
      sub_C7A2C((int)v3);
      sub_2578D4(v2, 0);
      sub_2573A8(v2, "\nValue = ", v18, v19);
      sub_C8D48(v3[40], (int)v25);
      sub_257684(v2, "value", v25);
      goto LABEL_6;
    case 9:
      if ( a1[5] )
      {
        if ( sub_257418(v2) )
        {
          v13 = sub_98384(3);
          sub_257610(v2, "reason", v13);
        }
        sub_C7A2C((int)v3);
        sub_2578D4(v2, 0);
        sub_2573A8(v2, "\nOld value = ", v14, v15);
        sub_C8D48(a1[5], (int)v25);
        sub_257684(v2, "old", v25);
        sub_2573A8(v2, "\nNew value = ", v16, v17);
      }
      else
      {
        sub_C7A2C((int)v3);
        if ( sub_257418(v2) )
        {
          v21 = sub_98384(3);
          sub_257610(v2, "reason", v21);
        }
        sub_2578D4(v2, 0);
        sub_2573A8(v2, "\nValue = ", v22, v23);
      }
      sub_C8D48(v3[40], (int)v25);
      sub_257684(v2, "new", v25);
LABEL_6:
      sub_2573A8(v2, &word_356660, v10, v11);
      sub_257374(v2, 0);
      break;
    default:
      break;
  }
  sub_2564A0(v25);
  return -1;
}
