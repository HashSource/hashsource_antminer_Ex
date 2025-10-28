__int64 sub_9B538()
{
  int v0; // r5
  int v1; // r0
  int v2; // r4
  __int64 v3; // r0
  __int64 v5; // [sp+8h] [bp-Ch] BYREF

  v0 = sub_26EA4C();
  v1 = sub_26BC98(v0);
  v2 = v1;
  if ( v1 )
  {
    switch ( **(_BYTE **)(v1 + 24) )
    {
      case 5:
      case 8:
      case 0xC:
      case 0x15:
        v3 = sub_26EB44(v0);
        if ( !sub_1707F4(v2, HIDWORD(v3), v3, HIDWORD(v3), &v5) )
          sub_94708("enumeration value is invalid: can't find 'POS");
        return v5;
      default:
        break;
    }
  }
  sub_94708("'POS only defined on discrete types");
}
