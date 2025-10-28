int __fastcall sub_63FC4(int a1, _DWORD *a2, int a3)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int result; // r0
  _DWORD v10[3]; // [sp+4h] [bp-Ch] BYREF

  if ( a3 != 1 )
    sub_94708("-thread-select: USAGE: threadnum.");
  v4 = sub_14CC94(*a2);
  v5 = sub_26EB44(v4);
  v6 = sub_23E3EC(v5);
  if ( !v6 )
    sub_94708("Thread ID %d not known.", v5);
  v10[0] = dword_4878EC;
  v10[1] = dword_4878F0;
  v10[2] = dword_4878F4;
  v7 = sub_2404C0(*a2, v6);
  v8 = (_DWORD *)sub_243004(v7);
  sub_240510(*v8, 12);
  result = sub_98FA0(&dword_4878EC, v10);
  if ( !result )
    return sub_1BABDC(12);
  return result;
}
