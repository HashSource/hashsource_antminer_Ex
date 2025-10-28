int __fastcall sub_251D18(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE v10[28]; // [sp+0h] [bp-8Ch] BYREF
  _BYTE v11[36]; // [sp+1Ch] [bp-70h] BYREF
  _BYTE v12[36]; // [sp+40h] [bp-4Ch] BYREF
  _BYTE v13[40]; // [sp+64h] [bp-28h] BYREF

  sub_2518F8(a3, a4, (int)v11);
  sub_2518F8(a5, a6, (int)v12);
  ((void (__fastcall *)(_BYTE *, _DWORD, _DWORD))loc_251A3C)(v10, *(_DWORD *)(a8 + 20), *(_DWORD *)(a8 + 24));
  switch ( a2 )
  {
    case 1:
      sub_32CBDC(v13, v11, v12, v10);
      break;
    case 2:
      sub_32CC28(v13, v11, v12, v10);
      break;
    case 3:
      sub_32BD08(v13, v11, v12, v10);
      break;
    case 4:
      sub_32E398(v13, v11, v12, v10);
      break;
    case 24:
      sub_32F800(v13, v11, v12, v10);
      break;
    default:
      sub_94708("Operation not valid for decimal floating point number.");
  }
  sub_2513C8((int)v10);
  return sub_251B94((int)v13, a7, a8);
}
