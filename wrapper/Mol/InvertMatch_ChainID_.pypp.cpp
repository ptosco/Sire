// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "InvertMatch_ChainID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "atom.h"

#include "chain.h"

#include "chainid.h"

#include "chainidentifier.h"

#include "chainresid.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "chainid.h"

SireID::InvertMatch<SireMol::ChainID> __copy__(const SireID::InvertMatch<SireMol::ChainID> &other){ return SireID::InvertMatch<SireMol::ChainID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_InvertMatch_ChainID__class(){

    { //::SireID::InvertMatch< SireMol::ChainID >
        typedef bp::class_< SireID::InvertMatch< SireMol::ChainID >, bp::bases< SireMol::ChainID, SireID::ID > > InvertMatch_ChainID__exposer_t;
        InvertMatch_ChainID__exposer_t InvertMatch_ChainID__exposer = InvertMatch_ChainID__exposer_t( "InvertMatch_ChainID_", "", bp::init< >("") );
        bp::scope InvertMatch_ChainID__scope( InvertMatch_ChainID__exposer );
        InvertMatch_ChainID__exposer.def( bp::init< SireMol::ChainID const & >(( bp::arg("id") ), "") );
        InvertMatch_ChainID__exposer.def( bp::init< SireID::InvertMatch< SireMol::ChainID > const & >(( bp::arg("other") ), "") );
        { //::SireID::InvertMatch< SireMol::ChainID >::hash
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef ::uint ( ::SireID::InvertMatch< SireMol::ChainID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::InvertMatch< SireMol::ChainID >::hash );
            
            InvertMatch_ChainID__exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireID::InvertMatch< SireMol::ChainID >::isNull
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef bool ( ::SireID::InvertMatch< SireMol::ChainID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::InvertMatch< SireMol::ChainID >::isNull );
            
            InvertMatch_ChainID__exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireID::InvertMatch< SireMol::ChainID >::map
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef ::QList< SireMol::ChainIdx > ( ::SireID::InvertMatch< SireMol::ChainID >::*map_function_type)( ::SireMol::ChainID::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::InvertMatch< SireMol::ChainID >::map );
            
            InvertMatch_ChainID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , "" );
        
        }
        InvertMatch_ChainID__exposer.def( bp::self != bp::self );
        InvertMatch_ChainID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::InvertMatch< SireMol::ChainID >::operator=
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef ::SireID::InvertMatch< SireMol::ChainID > & ( ::SireID::InvertMatch< SireMol::ChainID >::*assign_function_type)( ::SireID::InvertMatch< SireMol::ChainID > const & ) ;
            assign_function_type assign_function_value( &::SireID::InvertMatch< SireMol::ChainID >::operator= );
            
            InvertMatch_ChainID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InvertMatch_ChainID__exposer.def( bp::self == bp::self );
        InvertMatch_ChainID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::InvertMatch< SireMol::ChainID >::toString
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef ::QString ( ::SireID::InvertMatch< SireMol::ChainID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::InvertMatch< SireMol::ChainID >::toString );
            
            InvertMatch_ChainID__exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireID::InvertMatch< SireMol::ChainID >::typeName
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::InvertMatch< SireMol::ChainID >::typeName );
            
            InvertMatch_ChainID__exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireID::InvertMatch< SireMol::ChainID >::what
        
            typedef SireID::InvertMatch< SireMol::ChainID > exported_class_t;
            typedef char const * ( ::SireID::InvertMatch< SireMol::ChainID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::InvertMatch< SireMol::ChainID >::what );
            
            InvertMatch_ChainID__exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        InvertMatch_ChainID__exposer.staticmethod( "typeName" );
        InvertMatch_ChainID__exposer.def( "__copy__", &__copy__);
        InvertMatch_ChainID__exposer.def( "__deepcopy__", &__copy__);
        InvertMatch_ChainID__exposer.def( "clone", &__copy__);
        InvertMatch_ChainID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::InvertMatch<SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InvertMatch_ChainID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::InvertMatch<SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InvertMatch_ChainID__exposer.def( "__str__", &__str__< ::SireID::InvertMatch<SireMol::ChainID> > );
        InvertMatch_ChainID__exposer.def( "__repr__", &__str__< ::SireID::InvertMatch<SireMol::ChainID> > );
        InvertMatch_ChainID__exposer.def( "__hash__", &::SireID::InvertMatch<SireMol::ChainID>::hash );
    }

}