//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireIO_registrars.h"

#include "amberrst.h"
#include "gro87.h"
#include "flexibilitylibrary.h"
#include "tinker.h"
#include "zmatrixmaker.h"
#include "trajectorymonitor.h"
#include "protoms.h"
#include "charmmpsf.h"
#include "iobase.h"
#include "amberrst7.h"
#include "grotop.h"
#include "mol2.h"
#include "amberprm.h"
#include "pdb2.h"
#include "perturbationslibrary.h"
#include "moleculeparser.h"
#include "supplementary.h"
#include "pdb.h"
#include "amber.h"

#include "Helpers/objectregistry.hpp"

void register_SireIO_objects()
{

    ObjectRegistry::registerConverterFor< SireIO::AmberRst >();
    ObjectRegistry::registerConverterFor< SireIO::Gro87 >();
    ObjectRegistry::registerConverterFor< SireIO::FlexibilityLibrary >();
    ObjectRegistry::registerConverterFor< SireIO::FlexibilityTemplate >();
    ObjectRegistry::registerConverterFor< SireIO::Tinker >();
    ObjectRegistry::registerConverterFor< SireIO::ZmatrixMaker >();
    ObjectRegistry::registerConverterFor< SireIO::TrajectoryMonitor >();
    ObjectRegistry::registerConverterFor< SireIO::ProtoMS >();
    ObjectRegistry::registerConverterFor< SireIO::PSFAtom >();
    ObjectRegistry::registerConverterFor< SireIO::CharmmParam >();
    ObjectRegistry::registerConverterFor< SireIO::CharmmPSF >();
    ObjectRegistry::registerConverterFor< SireIO::NullIO >();
    ObjectRegistry::registerConverterFor< SireIO::AmberRst7 >();
    ObjectRegistry::registerConverterFor< SireIO::GroTop >();
    ObjectRegistry::registerConverterFor< SireIO::GroMolType >();
    ObjectRegistry::registerConverterFor< SireIO::GroAtom >();
    ObjectRegistry::registerConverterFor< SireIO::GroSystem >();
    ObjectRegistry::registerConverterFor< SireIO::Mol2Atom >();
    ObjectRegistry::registerConverterFor< SireIO::Mol2Bond >();
    ObjectRegistry::registerConverterFor< SireIO::Mol2Molecule >();
    ObjectRegistry::registerConverterFor< SireIO::Mol2Substructure >();
    ObjectRegistry::registerConverterFor< SireIO::Mol2 >();
    ObjectRegistry::registerConverterFor< SireIO::AmberPrm >();
    ObjectRegistry::registerConverterFor< SireIO::PDBAtom >();
    ObjectRegistry::registerConverterFor< SireIO::PDB2 >();
    ObjectRegistry::registerConverterFor< SireIO::PerturbationsLibrary >();
    ObjectRegistry::registerConverterFor< SireIO::PerturbationsTemplate >();
    ObjectRegistry::registerConverterFor< SireIO::NullParser >();
    ObjectRegistry::registerConverterFor< SireIO::Supplementary >();
    ObjectRegistry::registerConverterFor< SireIO::PDB >();
    ObjectRegistry::registerConverterFor< SireIO::Amber >();

}

