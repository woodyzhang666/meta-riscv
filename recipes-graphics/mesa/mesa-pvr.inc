SUMMARY = "PVR Mesa fork"
DESCRIPTION = "Mesa is an open-source implementation of the OpenGL specification - \
a system for rendering interactive 3D graphics.  \
A variety of device drivers allows Mesa to be used in many different environments \
ranging from software emulation to complete hardware acceleration for modern GPUs. \
Mesa is used as part of the overall Direct Rendering Infrastructure and X.org \
environment."

HOMEPAGE = "http://mesa3d.org"
BUGTRACKER = "https://bugs.freedesktop.org"
SECTION = "x11"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://docs/license.rst;md5=17a4ea65de7a9ab42437f3131e616a7f"

PE = "2"

SRC_URI = "https://mesa.freedesktop.org/archive/mesa-${PV}.tar.xz \
        file://0001-Add-pvr-dri-driver.patch \
        file://0002-Force-Mesa-to-use-the-PVR-driver-for-platform-device.patch \
        file://0003-dri-Add-some-new-DRI-formats-and-fourccs.patch \
        file://0004-GL_EXT_sparse_texture-entry-points.patch \
        file://0005-Add-support-for-various-GLES-extensions.patch \
        file://0006-Add-EGL_IMG_cl_image-extension.patch \
        file://0007-egl-Be-stricter-when-making-a-context-current-withou.patch \
        file://0008-egl-optimise-eglMakeCurrent-for-the-case-where-nothi.patch \
        file://0009-GL_EXT_shader_pixel_local_storage2-entry-points.patch \
        file://0010-GL_IMG_framebuffer_downsample-entry-points.patch \
        file://0011-GL_OVR_multiview-entry-points.patch \
        file://0012-Add-OVR_multiview_multisampled_render_to_texture.patch \
        file://0013-wayland-drm-install-wayland-drm.xml-to-the-configure.patch \
        file://0014-Enable-buffer-sharing-in-the-kms_swrast-driver.patch \
        file://0015-egl-wayland-add-support-for-RGB565-back-buffers.patch \
        file://0016-egl-dri3-fix-segfault-in-eglCopyBuffers.patch \
        file://0017-egl-automatically-call-eglReleaseThread-on-thread-te.patch \
        file://0018-egl-add-Tizen-platform-support.patch \
        file://0019-egl-add-support-for-EGL_TIZEN_image_native_surface.patch \
        file://0020-egl-wayland-post-maximum-damage-when-blitting.patch \
        file://0021-egl-wayland-flush-the-drawable-before-blitting.patch \
        file://0022-egl-tizen-create-an-internal-_EGLImage-for-each-tbm-.patch \
        file://0023-dri-use-a-supported-API-in-driCreateNewContext.patch \
        file://0024-gbm-add-gbm_bo_blit.patch \
        file://0025-gbm-don-t-assert-if-DRI-context-creation-fails.patch \
        file://0026-egl-wayland-add-pbuffer-support.patch \
        file://0027-egl-tizen-support-DRI-driver-handling-of-swap-preser.patch \
        file://0028-egl-eglBindAPI-workaround-for-dEQP-bug.patch \
        file://0029-GL_EXT_multi_draw_indirect-entry-points.patch \
        file://0030-dri-add-support-for-YUV-DRI-config.patch \
        file://0031-egl-add-support-for-EXT_yuv_surface.patch \
        file://0032-dri-add-missing-__DRI_IMAGE_COMPONENTS-define-for-EG.patch \
        file://0033-egl-wayland-expose-EXT_yuv_surface-support.patch \
        file://0034-egl-tizen-expose-EXT_yuv_surface-support.patch \
        file://0035-gbm-add-some-new-GBM-formats.patch \
        file://0036-egl-add-null-platform.patch \
        file://0037-egl-add-config-debug-printout.patch \
        file://0038-egl-add-support-for-EXT_image_gl_colorspace.patch \
        file://0039-meson-force-C-2011-for-thread_local.patch \
        file://0040-dri2-add-support-for-swap-intervals-other-than-1.patch \
        file://0041-null_platform-add-support-for-explicit-synchronisati.patch \
        file://0042-egl-null-add-support-for-DRM-image-format-modifiers.patch \
        file://0043-egl-query-the-supported-ES2-context-version.patch \
        file://0044-meson-allow-libGL-to-be-built-without-GLX.patch \
        file://0045-egl-wayland-process-non-resized-window-movement.patch \
        file://0046-Separate-EXT_framebuffer_object-from-ARB-version.patch \
        file://0047-egl-null-add-support-for-async-flip-with-front-buffe.patch \
        file://0048-gbm-add-pbuffer-support.patch \
        file://0049-egl-null-expose-EXT_yuv_surface-support.patch \
        file://0050-dri-preserve-the-original-FD-for-driver-use.patch \
        file://0051-egl-wayland-a-linear-buffer-is-not-needed-with-DRM-f.patch \
        file://0052-dri3-a-linear-buffer-is-not-needed-with-DRM-format-m.patch \
        file://0053-egl-drm-add-support-for-DRI_PRIME-GPU-selection.patch \
        file://0054-egl-null-add-support-for-DRI_PRIME-GPU-selection.patch \
        file://0055-egl-null-introduce-NULL_DRM_DISPLAY.patch \
        file://0056-vulkan-wsi-check-the-DRI3-and-Present-XCB-reply-poin.patch \
        file://0057-vulkan-wsi-Allow-host-visible-memory-to-be-requested.patch \
        file://0058-vulkan-wsi-make-the-display-FD-available.patch \
        file://0059-pvr-wsi-add-PowerVR-Vulkan-WSI-library.patch \
        file://0060-vulkan-wsi-Disable-use-of-VK_EXT_pci_bus_info.patch \
        file://0061-vulkan-wsi-default-to-force_bgra8_unorm_first-true.patch \
        file://0062-vulkan-wsi-enable-additional-formats-for-Wayland.patch \
        file://0063-vulkan-wsi-enable-additional-formats-for-Display.patch \
        file://0064-mesa-main-dri-add-YUV420_3PLANE-and-YVU420_3PLANE.patch \
        file://0065-egl-null-add-support-for-YU12-and-YV12.patch \
        file://0066-mesa-partially-revert-pbuffer-attribute-removal.patch \
        file://0067-egl_dri2-set-pbuffer-config-attribs-to-0-for-non-pbu.patch \
        file://0068-GL_ARB_geometry_shader4-entry-points.patch \
           "

S = "${WORKDIR}/mesa-${PV}"

SRC_URI[sha256sum] = "2c65e6710b419b67456a48beefd0be827b32db416772e0e363d5f7d54dc01787"

UPSTREAM_CHECK_GITTAGREGEX = "mesa-(?P<pver>\d+(\.\d+)+)"

#because we cannot rely on the fact that all apps will use pkgconfig,
#make eglplatform.h independent of MESA_EGL_NO_X11_HEADER
do_install:append() {
    if ${@bb.utils.contains('PACKAGECONFIG', 'egl', 'true', 'false', d)}; then
        sed -i -e 's/^#elif defined(__unix__) && defined(EGL_NO_X11)$/#elif defined(__unix__) \&\& defined(EGL_NO_X11) || ${@bb.utils.contains('PACKAGECONFIG', 'x11', '0', '1', d)}/' ${D}${includedir}/EGL/eglplatform.h
    fi
}

DEPENDS = "expat makedepend-native flex-native bison-native libxml2-native zlib chrpath-replacement-native python3-mako-native gettext-native"
EXTRANATIVEPATH += "chrpath-native"
# note: different to upstream Mesa, here is not PROVIDES for gles2, which conflicts with the way the visionfive2 binary driver is integrated
PROVIDES = " \
    ${@bb.utils.contains('PACKAGECONFIG', 'opengl', 'virtual/libgl', '', d)} \
    ${@bb.utils.contains('PACKAGECONFIG', 'egl', 'virtual/egl', '', d)} \
    ${@bb.utils.contains('PACKAGECONFIG', 'gbm', 'virtual/libgbm', '', d)} \
    virtual/mesa \
    "

inherit meson pkgconfig python3native gettext features_check

BBCLASSEXTEND = "native nativesdk"

ANY_OF_DISTRO_FEATURES:class-target = "opengl vulkan"

PLATFORMS ??= "${@bb.utils.filter('PACKAGECONFIG', 'x11 wayland', d)}"

# By placing llvm-config in the target sysroot bindir, it will then map values
# to the target libdir magically. We can safely add to path as there are no other binaries
# there.
PATH:prepend = "${STAGING_BINDIR_CROSS}:${STAGING_BINDIR}:"
do_configure:prepend () {
	if [ -e ${STAGING_BINDIR_NATIVE}/llvm-config ]; then
		cp ${STAGING_BINDIR_NATIVE}/llvm-config ${STAGING_BINDIR}
	fi
}

# set the MESA_BUILD_TYPE to either 'release' (default) or 'debug'
# by default the upstream mesa sources build a debug release
# here we assume the user will want a release build by default
MESA_BUILD_TYPE ?= "release"
def check_buildtype(d):
    _buildtype = d.getVar('MESA_BUILD_TYPE')
    if _buildtype not in ['release', 'debug']:
        bb.fatal("unknown build type (%s), please set MESA_BUILD_TYPE to either 'release' or 'debug'" % _buildtype)
    if _buildtype == 'debug':
        return 'debugoptimized'
    return 'plain'
MESON_BUILDTYPE = "${@check_buildtype(d)}"

EXTRA_OEMESON = " \
    -Dshared-glapi=enabled \
    -Dglx-read-only-text=true \
    -Dplatforms='${@",".join("${PLATFORMS}".split())}' \
    -Ddri-drivers=pvr \
    -Dgles1=disabled \
    -Dgles2=enabled \
"

def strip_comma(s):
    return s.strip(',')

# note: this is the exact config as needed and usable for the VisionFive2 board
#       upstream Mesa provides much more flexibility which is ignored for sake of simplicity
PACKAGECONFIG = "gallium x11 wayland opengl egl gbm dri3 "

# "gbm" requires "opengl"
PACKAGECONFIG[gbm] = "-Dgbm=enabled,-Dgbm=disabled"

X11_DEPS = "xorgproto virtual/libx11 libxext libxxf86vm libxdamage libxfixes xrandr"
# "x11" requires "opengl"
PACKAGECONFIG[x11] = ",-Dglx=disabled,${X11_DEPS}"
PACKAGECONFIG[xvmc] = "-Dgallium-xvmc=enabled,-Dgallium-xvmc=disabled,libxvmc"
PACKAGECONFIG[wayland] = ",,wayland-native wayland libdrm wayland-protocols"

PACKAGECONFIG[dri3] = "-Ddri3=enabled, -Ddri3=disabled, xorgproto libxshmfence"

# Vulkan drivers need dri3 enabled
# amd could be enabled as well but requires gallium-llvm with llvm >= 3.9
VULKAN_DRIVERS = ""
VULKAN_DRIVERS:append:x86:class-target = ",intel"
VULKAN_DRIVERS:append:x86-64:class-target = ",intel"
VULKAN_DRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'freedreno', ',freedreno', '', d)}"
VULKAN_DRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'broadcom', ',broadcom', '', d)}"
PACKAGECONFIG[vulkan] = "-Dvulkan-drivers=${@strip_comma('${VULKAN_DRIVERS}')}, -Dvulkan-drivers='',glslang-native vulkan-loader vulkan-headers"

PACKAGECONFIG[opengl] = "-Dopengl=true, -Dopengl=false"

# "gles" requires "opengl"
PACKAGECONFIG[gles] = "-Dgles1=enabled -Dgles2=enabled, -Dgles1=disabled -Dgles2=disabled"

# "egl" requires "opengl"
PACKAGECONFIG[egl] = "-Degl=enabled, -Degl=disabled"

# "opencl" requires libclc from meta-clang and spirv-tools from OE-Core
OPENCL_NATIVE = "${@bb.utils.contains('PACKAGECONFIG', 'freedreno', '-Dopencl-native=true', '', d)}"
PACKAGECONFIG[opencl] = "-Dgallium-opencl=icd -Dopencl-spirv=true ${OPENCL_NATIVE},-Dgallium-opencl=disabled -Dopencl-spirv=false,libclc spirv-tools"

PACKAGECONFIG[broadcom] = ""
PACKAGECONFIG[etnaviv] = ""
PACKAGECONFIG[freedreno] = ""
PACKAGECONFIG[kmsro] = ""
PACKAGECONFIG[pvr] = ""
PACKAGECONFIG[vc4] = ""
PACKAGECONFIG[v3d] = ""
PACKAGECONFIG[zink] = ""

GALLIUMDRIVERS = "swrast"
# gallium swrast was found to crash Xorg on startup in x32 qemu
GALLIUMDRIVERS:x86-x32 = ""
GALLIUMDRIVERS:append:x86:class-target = ",i915,iris,crocus"
GALLIUMDRIVERS:append:x86-64:class-target = ",i915,iris,crocus"

GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'etnaviv', ',etnaviv', '', d)}"
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'freedreno', ',freedreno', '', d)}"
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'kmsro', ',kmsro', '', d)}"
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'pvr', ',pvr', '', d)}"
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'vc4', ',vc4', '', d)}"
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'v3d', ',v3d', '', d)}"
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'zink', ',zink', '', d)}"

# radeonsi requires LLVM
GALLIUMDRIVERS_RADEONSI = "${@bb.utils.contains('PACKAGECONFIG', 'r600', ',radeonsi', '', d)}"
GALLIUMDRIVERS_LLVM = "r300,nouveau${GALLIUMDRIVERS_RADEONSI}"
GALLIUMDRIVERS_LLVM:append:x86:class-target = ",svga"
GALLIUMDRIVERS_LLVM:append:x86-64:class-target = ",svga"

PACKAGECONFIG[r600] = ""
PACKAGECONFIG[virgl] = ""

GALLIUMDRIVERS:append = "${@bb.utils.contains('PACKAGECONFIG', 'gallium-llvm', ',${GALLIUMDRIVERS_LLVM}', '', d)}"
GALLIUMDRIVERS:append = "${@bb.utils.contains('PACKAGECONFIG', 'r600', ',r600', '', d)}"
GALLIUMDRIVERS:append = "${@bb.utils.contains('PACKAGECONFIG', 'virgl', ',virgl', '', d)}"

PACKAGECONFIG[gallium] = "-Dgallium-drivers=${@strip_comma('${GALLIUMDRIVERS}')}, -Dgallium-drivers='', libdrm"
PACKAGECONFIG[gallium-llvm] = "-Dllvm=enabled -Dshared-llvm=enabled, -Dllvm=disabled, llvm llvm-native \
                               elfutils"
PACKAGECONFIG[xa]  = "-Dgallium-xa=enabled, -Dgallium-xa=disabled"
PACKAGECONFIG[va] = "-Dgallium-va=enabled,-Dgallium-va=disabled,libva-initial"

PACKAGECONFIG[vdpau] = "-Dgallium-vdpau=enabled,-Dgallium-vdpau=disabled,libvdpau"

PACKAGECONFIG[lima] = ""
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'lima', ',lima', '', d)}"

PACKAGECONFIG[panfrost] = ""
GALLIUMDRIVERS:append ="${@bb.utils.contains('PACKAGECONFIG', 'panfrost', ',panfrost', '', d)}"

PACKAGECONFIG[osmesa] = "-Dosmesa=true,-Dosmesa=false"

PACKAGECONFIG[perfetto] = "-Dperfetto=true,-Dperfetto=false,libperfetto"

PACKAGECONFIG[unwind] = "-Dlibunwind=enabled,-Dlibunwind=disabled,libunwind"

PACKAGECONFIG[lmsensors] = "-Dlmsensors=enabled,-Dlmsensors=disabled,lmsensors"

# llvmpipe is slow if compiled with -fomit-frame-pointer (e.g. -O2)
FULL_OPTIMIZATION:append = " -fno-omit-frame-pointer"

CFLAGS:append:armv5 = " -DMISSING_64BIT_ATOMICS"
CFLAGS:append:armv6 = " -DMISSING_64BIT_ATOMICS"

# Remove the mesa dependency on mesa-dev, as mesa is empty
DEV_PKG_DEPENDENCY = ""

# Khronos documentation says that include/GLES2/gl2ext.h can be used for
# OpenGL ES 3 specification as well as for OpenGL ES 2.
# There can be applications including GLES2/gl2ext.h instead of GLES3/gl3ext.h
# meaning we should probably bring in GLES2/gl2ext.h if someone asks for
# development package of libgles3.
RDEPENDS:libgles3-mesa-dev += "libgles2-mesa-dev"

RDEPENDS:libopencl-mesa += "${@bb.utils.contains('PACKAGECONFIG', 'opencl', 'libclc spirv-tools', '', d)}"

PACKAGES =+ "libegl-mesa libegl-mesa-dev \
             libosmesa libosmesa-dev \
             libgl-mesa libgl-mesa-dev \
             libglapi libglapi-dev \
             libgbm libgbm-dev \
             libgles1-mesa libgles1-mesa-dev \
             libgles2-mesa libgles2-mesa-dev \
             libgles3-mesa libgles3-mesa-dev \
             libopencl-mesa libopencl-mesa-dev \
             libxatracker libxatracker-dev \
             mesa-megadriver mesa-vulkan-drivers \
             mesa-vdpau-drivers \
            "

do_install:append () {
    # Drivers never need libtool .la files
    rm -f ${D}${libdir}/dri/*.la
    rm -f ${D}${libdir}/egl/*.la
    rm -f ${D}${libdir}/gallium-pipe/*.la
    rm -f ${D}${libdir}/gbm/*.la

    # it was packaged in libdricore9.1.3-1 and preventing upgrades when debian.bbclass was used 
    chrpath --delete ${D}${libdir}/dri/*_dri.so || true

    # libwayland-egl has been moved to wayland 1.15+
    rm -f ${D}${libdir}/libwayland-egl*
    rm -f ${D}${libdir}/pkgconfig/wayland-egl.pc
}

# For the packages that make up the OpenGL interfaces, inject variables so that
# they don't get Debian-renamed (which would remove the -mesa suffix), and
# RPROVIDEs/RCONFLICTs on the generic libgl name.
python __anonymous() {
    pkgconfig = (d.getVar('PACKAGECONFIG') or "").split()
    suffix = ""
    if "-native" in d.getVar("PN"):
        suffix = "-native"
    for p in (("vulkan", "libvk",),
              ("egl", "libegl", "libegl1"),
              ("opengl", "libgl", "libgl1"),
              ("gles", "libgles1", "libglesv1-cm1"),
              ("gles", "libgles2", "libglesv2-2"),
              ("opencl", "libopencl",)):
        if not p[0] in pkgconfig:
            continue
        mlprefix = d.getVar("MLPREFIX")
        fullp = mlprefix + p[1] + "-mesa" + suffix
        mlprefix = d.getVar("MLPREFIX")
        pkgs = " " + " ".join(mlprefix + x + suffix for x in p[1:])
        d.setVar("DEBIAN_NOAUTONAME:" + fullp, "1")
        d.appendVar("RREPLACES:" + fullp, pkgs)
        d.appendVar("RPROVIDES:" + fullp, pkgs)
        d.appendVar("RCONFLICTS:" + fullp, pkgs)

        d.appendVar("RRECOMMENDS:" + fullp, " ${MLPREFIX}mesa-megadriver" + suffix)

        # For -dev, the first element is both the Debian and original name
        fullp = mlprefix + p[1] + "-mesa-dev" + suffix
        pkgs = " " + mlprefix + p[1] + "-dev" + suffix
        d.setVar("DEBIAN_NOAUTONAME:" + fullp, "1")
        d.appendVar("RREPLACES:" + fullp, pkgs)
        d.appendVar("RPROVIDES:" + fullp, pkgs)
        d.appendVar("RCONFLICTS:" + fullp, pkgs)
}

python mesa_populate_packages() {
    pkgs = ['mesa', 'mesa-dev', 'mesa-dbg']
    for pkg in pkgs:
        d.setVar("RPROVIDES:%s" % pkg, pkg.replace("mesa", "mesa-dri", 1))
        d.setVar("RCONFLICTS:%s" % pkg, pkg.replace("mesa", "mesa-dri", 1))
        d.setVar("RREPLACES:%s" % pkg, pkg.replace("mesa", "mesa-dri", 1))

    import re
    dri_drivers_root = oe.path.join(d.getVar('PKGD'), d.getVar('libdir'), "dri")
    if os.path.isdir(dri_drivers_root):
        dri_pkgs = sorted(os.listdir(dri_drivers_root))
        lib_name = d.expand("${MLPREFIX}mesa-megadriver")
        for p in dri_pkgs:
            m = re.match(r'^(.*)_dri\.so$', p)
            if m:
                pkg_name = " ${MLPREFIX}mesa-driver-%s" % legitimize_package_name(m.group(1))
                d.appendVar("RPROVIDES:%s" % lib_name, pkg_name)
                d.appendVar("RCONFLICTS:%s" % lib_name, pkg_name)
                d.appendVar("RREPLACES:%s" % lib_name, pkg_name)

    pipe_drivers_root = os.path.join(d.getVar('libdir'), "gallium-pipe")
    do_split_packages(d, pipe_drivers_root, r'^pipe_(.*)\.so$', 'mesa-driver-pipe-%s', 'Mesa %s pipe driver', extra_depends='')
}

PACKAGESPLITFUNCS:prepend = "mesa_populate_packages "

PACKAGES_DYNAMIC += "^mesa-driver-.*"
PACKAGES_DYNAMIC:class-native = "^mesa-driver-.*-native"

FILES:mesa-megadriver = "${libdir}/dri/* ${datadir}/drirc.d"
FILES:mesa-vulkan-drivers = "${libdir}/libvulkan_*.so ${datadir}/vulkan"
FILES:${PN}-vdpau-drivers = "${libdir}/vdpau/*.so.*"
FILES:libegl-mesa = "${libdir}/libEGL.so.*"
FILES:libgbm = "${libdir}/libgbm.so.*"
FILES:libgles1-mesa = "${libdir}/libGLESv1*.so.*"
FILES:libgles2-mesa = "${libdir}/libGLESv2.so.*"
FILES:libgl-mesa = "${libdir}/libGL.so.*"
FILES:libopencl-mesa = "${libdir}/libMesaOpenCL.so.* ${libdir}/gallium-pipe/*.so ${sysconfdir}/OpenCL/vendors/mesa.icd"
FILES:libglapi = "${libdir}/libglapi.so.*"
FILES:libosmesa = "${libdir}/libOSMesa.so.*"
FILES:libxatracker = "${libdir}/libxatracker.so.*"

FILES:${PN}-dev = "${libdir}/pkgconfig/dri.pc ${includedir}/vulkan ${libdir}/vdpau/*.so ${datadir}/mesa/wayland-drm.xml ${datadir}/pkgconfig/*"
FILES:libegl-mesa-dev = "${libdir}/libEGL.* ${includedir}/EGL ${includedir}/KHR ${libdir}/pkgconfig/egl.pc"
FILES:libgbm-dev = "${libdir}/libgbm.* ${libdir}/pkgconfig/gbm.pc ${includedir}/gbm.h"
FILES:libgl-mesa-dev = "${libdir}/libGL.* ${includedir}/GL ${libdir}/pkgconfig/gl.pc"
FILES:libglapi-dev = "${libdir}/libglapi.*"
FILES:libgles1-mesa-dev = "${libdir}/libGLESv1*.* ${includedir}/GLES ${libdir}/pkgconfig/glesv1*.pc"
FILES:libgles2-mesa-dev = "${libdir}/libGLESv2.* ${includedir}/GLES2 ${libdir}/pkgconfig/glesv2.pc"
FILES:libgles3-mesa-dev = "${includedir}/GLES3"
FILES:libopencl-mesa-dev = "${libdir}/libMesaOpenCL.so"
FILES:libosmesa-dev = "${libdir}/libOSMesa.* ${includedir}/GL/osmesa.h ${libdir}/pkgconfig/osmesa.pc"
FILES:libxatracker-dev = "${libdir}/libxatracker.so ${libdir}/libxatracker.la \
                          ${includedir}/xa_tracker.h ${includedir}/xa_composite.h ${includedir}/xa_context.h \
                          ${libdir}/pkgconfig/xatracker.pc"

# Fix upgrade path from mesa to mesa-megadriver
RREPLACES:mesa-megadriver = "mesa"
RCONFLICTS:mesa-megadriver = "mesa"
RPROVIDES:mesa-megadriver = "mesa"
