int __fastcall axi_fpga_dev_mmap(file *filp, vm_area_struct *vma)
{
  unsigned __int64 vm_start; // x7
  unsigned __int64 vm_pgoff; // x6
  unsigned __int64 v4; // x5

  vm_start = vma->vm_start;
  vm_pgoff = vma->vm_pgoff;
  v4 = vma->vm_flags | 0x4044000;
  vma->vm_page_prot.pgprot = vma->vm_page_prot.pgprot & 0xFF9FFFFFFFFFFFE3LL | 0x60000000000000LL;
  vma->vm_flags = v4;
  return remap_pfn_range(vma, vm_start + vm_pgoff, 0x80000, 4096);
}
