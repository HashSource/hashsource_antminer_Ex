int __fastcall sub_A9F04(int a1, const char **a2)
{
  __int64 v5; // [sp+8h] [bp-84h] BYREF
  char v6[32]; // [sp+10h] [bp-7Ch] BYREF
  _BYTE v7[48]; // [sp+30h] [bp-5Ch] BYREF
  int v8; // [sp+60h] [bp-2Ch]
  _BYTE v9[32]; // [sp+64h] [bp-28h] BYREF

  v5 = *(_QWORD *)a2;
  strcpy(v6, a2[281]);
  memcpy(v7, a2 + 2, sizeof(v7));
  v8 = QMap<tagE_LEVEL,MFaultLabel::FaultType>::empty((int)(a2 + 258));
  memcpy(v9, a2 + 258, sizeof(v9));
  (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v5);
  return 0;
}
