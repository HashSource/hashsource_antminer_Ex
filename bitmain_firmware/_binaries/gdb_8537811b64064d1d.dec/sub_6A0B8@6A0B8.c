void __fastcall sub_6A0B8(int a1)
{
  _BYTE *v1; // r0
  _DWORD *v2; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v3; // [sp+4h] [bp-8h] BYREF

  v1 = (_BYTE *)sub_93634(a1);
  if ( v1 && *v1 )
    sub_94708("Guile scripting is not supported in this copy of GDB.");
  sub_57EB8(&v2, 8, "");
  sub_59064((int)v2);
  if ( v2 )
  {
    v3 = v2;
    sub_57E40(&v3);
  }
}
