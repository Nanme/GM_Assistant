#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// Ce code source a été automatiquement généré par xsd, Version=4.0.30319.33440.
// 
using namespace System;
ref class NewDataSet;


/// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
[System::Serializable, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::ComponentModel::ToolboxItem(true), 
System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
System::Xml::Serialization::XmlRootAttribute(L"NewDataSet"), 
System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
public ref class NewDataSet : public ::System::Data::DataSet {
    public : ref class damageDataTable;
    public : ref class weaponDataTable;
    public : ref class weaponDBDataTable;
    public : ref class damageRow;
    public : ref class weaponRow;
    public : ref class weaponDBRow;
    public : ref class damageRowChangeEvent;
    public : ref class weaponRowChangeEvent;
    public : ref class weaponDBRowChangeEvent;
    
    private: NewDataSet::damageDataTable^  tabledamage;
    
    private: NewDataSet::weaponDataTable^  tableweapon;
    
    private: NewDataSet::weaponDBDataTable^  tableweaponDB;
    
    private: ::System::Data::DataRelation^  relationweapon_damage;
    
    private: ::System::Data::DataRelation^  relationweaponDB_weapon;
    
    private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void damageRowChangeEventHandler(::System::Object^  sender, NewDataSet::damageRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void weaponRowChangeEventHandler(::System::Object^  sender, NewDataSet::weaponRowChangeEvent^  e);
    
    public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    delegate System::Void weaponDBRowChangeEventHandler(::System::Object^  sender, NewDataSet::weaponDBRowChangeEvent^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    NewDataSet();
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    NewDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::damageDataTable^  damage {
        NewDataSet::damageDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::weaponDataTable^  weapon {
        NewDataSet::weaponDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::Browsable(false), 
    System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
    property NewDataSet::weaponDBDataTable^  weaponDB {
        NewDataSet::weaponDBDataTable^  get();
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::BrowsableAttribute(true), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
    virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
        ::System::Data::SchemaSerializationMode get() override;
        System::Void set(::System::Data::SchemaSerializationMode value) override;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataTableCollection^  Tables {
        ::System::Data::DataTableCollection^  get() new;
    }
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
    System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
    System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
    property ::System::Data::DataRelationCollection^  Relations {
        ::System::Data::DataRelationCollection^  get() new;
    }
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void InitializeDerivedDataSet() override;
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Data::DataSet^  Clone() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeTables() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Boolean ShouldSerializeRelations() override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
    
    protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars();
    
    internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitVars(::System::Boolean initTable);
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void InitClass();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializedamage();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeweapon();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Boolean ShouldSerializeweaponDB();
    
    private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
    
    public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class damageDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnmod;
        
        private: ::System::Data::DataColumn^  columndamage_text;
        
        private: ::System::Data::DataColumn^  columnweapon_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::damageRowChangeEventHandler^  damageRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::damageRowChangeEventHandler^  damageRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::damageRowChangeEventHandler^  damageRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::damageRowChangeEventHandler^  damageRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        damageDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        damageDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        damageDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  modColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  damage_textColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  weapon_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::damageRow^  default [::System::Int32 ] {
            NewDataSet::damageRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AdddamageRow(NewDataSet::damageRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::damageRow^  AdddamageRow(System::Boolean mod, System::Int64 damage_text, NewDataSet::weaponRow^  parentweaponRowByweapon_damage);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::damageRow^  NewdamageRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemovedamageRow(NewDataSet::damageRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class weaponDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columncode;
        
        private: ::System::Data::DataColumn^  columnname;
        
        private: ::System::Data::DataColumn^  columncrown;
        
        private: ::System::Data::DataColumn^  columnpenny;
        
        private: ::System::Data::DataColumn^  columnschiling;
        
        private: ::System::Data::DataColumn^  columndimension;
        
        private: ::System::Data::DataColumn^  columnrarity;
        
        private: ::System::Data::DataColumn^  columnweaponType;
        
        private: ::System::Data::DataColumn^  columnshortRange;
        
        private: ::System::Data::DataColumn^  columnlongRange;
        
        private: ::System::Data::DataColumn^  columnattribute;
        
        private: ::System::Data::DataColumn^  columnweapon_Id;
        
        private: ::System::Data::DataColumn^  columnweaponDB_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponRowChangeEventHandler^  weaponRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponRowChangeEventHandler^  weaponRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponRowChangeEventHandler^  weaponRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponRowChangeEventHandler^  weaponRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  codeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  nameColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  crownColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  pennyColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  schilingColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  dimensionColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  rarityColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  weaponTypeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  shortRangeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  longRangeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  attributeColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  weapon_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  weaponDB_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::weaponRow^  default [::System::Int32 ] {
            NewDataSet::weaponRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddweaponRow(NewDataSet::weaponRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::weaponRow^  AddweaponRow(
                    System::String^  code, 
                    System::String^  name, 
                    System::UInt64 crown, 
                    System::UInt64 penny, 
                    System::UInt64 schiling, 
                    System::UInt64 dimension, 
                    System::Int64 rarity, 
                    System::String^  weaponType, 
                    System::UInt64 shortRange, 
                    System::UInt64 longRange, 
                    System::String^  attribute, 
                    NewDataSet::weaponDBRow^  parentweaponDBRowByweaponDB_weapon);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::weaponRow^  NewweaponRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveweaponRow(NewDataSet::weaponRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
    [System::Serializable, 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
    ref class weaponDBDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
        
        private: ::System::Data::DataColumn^  columnweaponDB_Id;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponDBRowChangeEventHandler^  weaponDBRowChanging;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponDBRowChangeEventHandler^  weaponDBRowChanged;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponDBRowChangeEventHandler^  weaponDBRowDeleting;
        
        public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        event NewDataSet::weaponDBRowChangeEventHandler^  weaponDBRowDeleted;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDBDataTable();
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDBDataTable(::System::Data::DataTable^  table);
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDBDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataColumn^  weaponDB_IdColumn {
            ::System::Data::DataColumn^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false)]
        property ::System::Int32 Count {
            ::System::Int32 get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::weaponDBRow^  default [::System::Int32 ] {
            NewDataSet::weaponDBRow^  get(::System::Int32 index);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void AddweaponDBRow(NewDataSet::weaponDBRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::weaponDBRow^  AddweaponDBRow();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Collections::IEnumerator^  GetEnumerator();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataTable^  CreateInstance() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        NewDataSet::weaponDBRow^  NewweaponDBRow();
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Type^  GetRowType() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void RemoveweaponDBRow(NewDataSet::weaponDBRow^  row);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class damageRow : public ::System::Data::DataRow {
        
        private: NewDataSet::damageDataTable^  tabledamage;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        damageRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Boolean mod {
            System::Boolean get();
            System::Void set(System::Boolean value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int64 damage_text {
            System::Int64 get();
            System::Void set(System::Int64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 weapon_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::weaponRow^  weaponRow {
            NewDataSet::weaponRow^  get();
            System::Void set(NewDataSet::weaponRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsmodNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetmodNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean Isweapon_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void Setweapon_IdNull();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class weaponRow : public ::System::Data::DataRow {
        
        private: NewDataSet::weaponDataTable^  tableweapon;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  code {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  name {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 crown {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 penny {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 schiling {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 dimension {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int64 rarity {
            System::Int64 get();
            System::Void set(System::Int64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  weaponType {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 shortRange {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::UInt64 longRange {
            System::UInt64 get();
            System::Void set(System::UInt64 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::String^  attribute {
            System::String^  get();
            System::Void set(System::String^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 weapon_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 weaponDB_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::weaponDBRow^  weaponDBRow {
            NewDataSet::weaponDBRow^  get();
            System::Void set(NewDataSet::weaponDBRow^  value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean IsweaponDB_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SetweaponDB_IdNull();
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< NewDataSet::damageRow^  >^  GetdamageRows();
    };
    
    public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
    ref class weaponDBRow : public ::System::Data::DataRow {
        
        private: NewDataSet::weaponDBDataTable^  tableweaponDB;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDBRow(::System::Data::DataRowBuilder^  rb);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property System::Int32 weaponDB_Id {
            System::Int32 get();
            System::Void set(System::Int32 value);
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        cli::array< NewDataSet::weaponRow^  >^  GetweaponRows();
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class damageRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::damageRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        damageRowChangeEvent(NewDataSet::damageRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::damageRow^  Row {
            NewDataSet::damageRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class weaponRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::weaponRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponRowChangeEvent(NewDataSet::weaponRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::weaponRow^  Row {
            NewDataSet::weaponRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
    
    public : /// <summary>
///Row event argument class
///</summary>
    [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
    ref class weaponDBRowChangeEvent : public ::System::EventArgs {
        
        private: NewDataSet::weaponDBRow^  eventRow;
        
        private: ::System::Data::DataRowAction eventAction;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        weaponDBRowChangeEvent(NewDataSet::weaponDBRow^  row, ::System::Data::DataRowAction action);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property NewDataSet::weaponDBRow^  Row {
            NewDataSet::weaponDBRow^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        property ::System::Data::DataRowAction Action {
            ::System::Data::DataRowAction get();
        }
    };
};


inline NewDataSet::NewDataSet() {
    this->BeginInit();
    this->InitClass();
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &NewDataSet::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    __super::Relations->CollectionChanged += schemaChangedHandler;
    this->EndInit();
}

inline NewDataSet::NewDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataSet(info, context, false) {
    if (this->IsBinarySerialized(info, context) == true) {
        this->InitVars(false);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &NewDataSet::SchemaChanged);
        this->Tables->CollectionChanged += schemaChangedHandler1;
        this->Relations->CollectionChanged += schemaChangedHandler1;
        return;
    }
    ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
    if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        if (ds->Tables[L"damage"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::damageDataTable(ds->Tables[L"damage"])));
        }
        if (ds->Tables[L"weapon"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::weaponDataTable(ds->Tables[L"weapon"])));
        }
        if (ds->Tables[L"weaponDB"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::weaponDBDataTable(ds->Tables[L"weaponDB"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
    }
    this->GetSerializationData(info, context);
    ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &NewDataSet::SchemaChanged);
    __super::Tables->CollectionChanged += schemaChangedHandler;
    this->Relations->CollectionChanged += schemaChangedHandler;
}

inline NewDataSet::damageDataTable^  NewDataSet::damage::get() {
    return this->tabledamage;
}

inline NewDataSet::weaponDataTable^  NewDataSet::weapon::get() {
    return this->tableweapon;
}

inline NewDataSet::weaponDBDataTable^  NewDataSet::weaponDB::get() {
    return this->tableweaponDB;
}

inline ::System::Data::SchemaSerializationMode NewDataSet::SchemaSerializationMode::get() {
    return this->_schemaSerializationMode;
}
inline System::Void NewDataSet::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
    this->_schemaSerializationMode = __identifier(value);
}

inline ::System::Data::DataTableCollection^  NewDataSet::Tables::get() {
    return __super::Tables;
}

inline ::System::Data::DataRelationCollection^  NewDataSet::Relations::get() {
    return __super::Relations;
}

inline ::System::Void NewDataSet::InitializeDerivedDataSet() {
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline ::System::Data::DataSet^  NewDataSet::Clone() {
    NewDataSet^  cln = (cli::safe_cast<NewDataSet^  >(__super::Clone()));
    cln->InitVars();
    cln->SchemaSerializationMode = this->SchemaSerializationMode;
    return cln;
}

inline ::System::Boolean NewDataSet::ShouldSerializeTables() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializeRelations() {
    return false;
}

inline ::System::Void NewDataSet::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
    if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
        this->Reset();
        ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
        ds->ReadXml(reader);
        if (ds->Tables[L"damage"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::damageDataTable(ds->Tables[L"damage"])));
        }
        if (ds->Tables[L"weapon"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::weaponDataTable(ds->Tables[L"weapon"])));
        }
        if (ds->Tables[L"weaponDB"] != nullptr) {
            __super::Tables->Add((gcnew NewDataSet::weaponDBDataTable(ds->Tables[L"weaponDB"])));
        }
        this->DataSetName = ds->DataSetName;
        this->Prefix = ds->Prefix;
        this->Namespace = ds->Namespace;
        this->Locale = ds->Locale;
        this->CaseSensitive = ds->CaseSensitive;
        this->EnforceConstraints = ds->EnforceConstraints;
        this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
        this->InitVars();
    }
    else {
        this->ReadXml(reader);
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchema^  NewDataSet::GetSchemaSerializable() {
    ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
    this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
    stream->Position = 0;
    return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
}

inline ::System::Void NewDataSet::InitVars() {
    this->InitVars(true);
}

inline ::System::Void NewDataSet::InitVars(::System::Boolean initTable) {
    this->tabledamage = (cli::safe_cast<NewDataSet::damageDataTable^  >(__super::Tables[L"damage"]));
    if (initTable == true) {
        if (this->tabledamage != nullptr) {
            this->tabledamage->InitVars();
        }
    }
    this->tableweapon = (cli::safe_cast<NewDataSet::weaponDataTable^  >(__super::Tables[L"weapon"]));
    if (initTable == true) {
        if (this->tableweapon != nullptr) {
            this->tableweapon->InitVars();
        }
    }
    this->tableweaponDB = (cli::safe_cast<NewDataSet::weaponDBDataTable^  >(__super::Tables[L"weaponDB"]));
    if (initTable == true) {
        if (this->tableweaponDB != nullptr) {
            this->tableweaponDB->InitVars();
        }
    }
    this->relationweapon_damage = this->Relations[L"weapon_damage"];
    this->relationweaponDB_weapon = this->Relations[L"weaponDB_weapon"];
}

inline ::System::Void NewDataSet::InitClass() {
    this->DataSetName = L"NewDataSet";
    this->Prefix = L"";
    this->Locale = (gcnew ::System::Globalization::CultureInfo(L""));
    this->EnforceConstraints = true;
    this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
    this->tabledamage = (gcnew NewDataSet::damageDataTable());
    __super::Tables->Add(this->tabledamage);
    this->tableweapon = (gcnew NewDataSet::weaponDataTable());
    __super::Tables->Add(this->tableweapon);
    this->tableweaponDB = (gcnew NewDataSet::weaponDBDataTable());
    __super::Tables->Add(this->tableweaponDB);
    ::System::Data::ForeignKeyConstraint^  fkc;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"weapon_damage", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableweapon->weapon_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tabledamage->weapon_IdColumn}));
    this->tabledamage->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    fkc = (gcnew ::System::Data::ForeignKeyConstraint(L"weaponDB_weapon", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableweaponDB->weaponDB_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableweapon->weaponDB_IdColumn}));
    this->tableweapon->Constraints->Add(fkc);
    fkc->AcceptRejectRule = ::System::Data::AcceptRejectRule::None;
    fkc->DeleteRule = ::System::Data::Rule::Cascade;
    fkc->UpdateRule = ::System::Data::Rule::Cascade;
    this->relationweapon_damage = (gcnew ::System::Data::DataRelation(L"weapon_damage", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableweapon->weapon_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tabledamage->weapon_IdColumn}, false));
    this->relationweapon_damage->Nested = true;
    this->Relations->Add(this->relationweapon_damage);
    this->relationweaponDB_weapon = (gcnew ::System::Data::DataRelation(L"weaponDB_weapon", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableweaponDB->weaponDB_IdColumn}, 
        gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->tableweapon->weaponDB_IdColumn}, false));
    this->relationweaponDB_weapon->Nested = true;
    this->Relations->Add(this->relationweaponDB_weapon);
}

inline ::System::Boolean NewDataSet::ShouldSerializedamage() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializeweapon() {
    return false;
}

inline ::System::Boolean NewDataSet::ShouldSerializeweaponDB() {
    return false;
}

inline ::System::Void NewDataSet::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
    if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
        this->InitVars();
    }
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any->Namespace = ds->Namespace;
    sequence->Items->Add(any);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::damageDataTable::damageDataTable() {
    this->TableName = L"damage";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::damageDataTable::damageDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline NewDataSet::damageDataTable::damageDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::damageDataTable::modColumn::get() {
    return this->columnmod;
}

inline ::System::Data::DataColumn^  NewDataSet::damageDataTable::damage_textColumn::get() {
    return this->columndamage_text;
}

inline ::System::Data::DataColumn^  NewDataSet::damageDataTable::weapon_IdColumn::get() {
    return this->columnweapon_Id;
}

inline ::System::Int32 NewDataSet::damageDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::damageRow^  NewDataSet::damageDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::damageRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::damageDataTable::AdddamageRow(NewDataSet::damageRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::damageRow^  NewDataSet::damageDataTable::AdddamageRow(System::Boolean mod, System::Int64 damage_text, 
            NewDataSet::weaponRow^  parentweaponRowByweapon_damage) {
    NewDataSet::damageRow^  rowdamageRow = (cli::safe_cast<NewDataSet::damageRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {mod, damage_text, nullptr};
    if (parentweaponRowByweapon_damage != nullptr) {
        columnValuesArray[2] = parentweaponRowByweapon_damage[11];
    }
    rowdamageRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowdamageRow);
    return rowdamageRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::damageDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::damageDataTable::Clone() {
    NewDataSet::damageDataTable^  cln = (cli::safe_cast<NewDataSet::damageDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::damageDataTable::CreateInstance() {
    return (gcnew NewDataSet::damageDataTable());
}

inline ::System::Void NewDataSet::damageDataTable::InitVars() {
    this->columnmod = __super::Columns[L"mod"];
    this->columndamage_text = __super::Columns[L"damage_text"];
    this->columnweapon_Id = __super::Columns[L"weapon_Id"];
}

inline ::System::Void NewDataSet::damageDataTable::InitClass() {
    this->columnmod = (gcnew ::System::Data::DataColumn(L"mod", ::System::Boolean::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columnmod);
    this->columndamage_text = (gcnew ::System::Data::DataColumn(L"damage_text", ::System::Int64::typeid, nullptr, ::System::Data::MappingType::SimpleContent));
    __super::Columns->Add(this->columndamage_text);
    this->columnweapon_Id = (gcnew ::System::Data::DataColumn(L"weapon_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnweapon_Id);
    this->columnmod->Namespace = L"";
    this->columndamage_text->AllowDBNull = false;
}

inline NewDataSet::damageRow^  NewDataSet::damageDataTable::NewdamageRow() {
    return (cli::safe_cast<NewDataSet::damageRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::damageDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::damageRow(builder));
}

inline ::System::Type^  NewDataSet::damageDataTable::GetRowType() {
    return NewDataSet::damageRow::typeid;
}

inline ::System::Void NewDataSet::damageDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->damageRowChanged(this, (gcnew NewDataSet::damageRowChangeEvent((cli::safe_cast<NewDataSet::damageRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::damageDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->damageRowChanging(this, (gcnew NewDataSet::damageRowChangeEvent((cli::safe_cast<NewDataSet::damageRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::damageDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->damageRowDeleted(this, (gcnew NewDataSet::damageRowChangeEvent((cli::safe_cast<NewDataSet::damageRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::damageDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->damageRowDeleting(this, (gcnew NewDataSet::damageRowChangeEvent((cli::safe_cast<NewDataSet::damageRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::damageDataTable::RemovedamageRow(NewDataSet::damageRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::damageDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"damageDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::weaponDataTable::weaponDataTable() {
    this->TableName = L"weapon";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::weaponDataTable::weaponDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline NewDataSet::weaponDataTable::weaponDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::codeColumn::get() {
    return this->columncode;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::nameColumn::get() {
    return this->columnname;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::crownColumn::get() {
    return this->columncrown;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::pennyColumn::get() {
    return this->columnpenny;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::schilingColumn::get() {
    return this->columnschiling;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::dimensionColumn::get() {
    return this->columndimension;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::rarityColumn::get() {
    return this->columnrarity;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::weaponTypeColumn::get() {
    return this->columnweaponType;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::shortRangeColumn::get() {
    return this->columnshortRange;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::longRangeColumn::get() {
    return this->columnlongRange;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::attributeColumn::get() {
    return this->columnattribute;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::weapon_IdColumn::get() {
    return this->columnweapon_Id;
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDataTable::weaponDB_IdColumn::get() {
    return this->columnweaponDB_Id;
}

inline ::System::Int32 NewDataSet::weaponDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::weaponRow^  NewDataSet::weaponDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::weaponRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::weaponDataTable::AddweaponRow(NewDataSet::weaponRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::weaponRow^  NewDataSet::weaponDataTable::AddweaponRow(
            System::String^  code, 
            System::String^  name, 
            System::UInt64 crown, 
            System::UInt64 penny, 
            System::UInt64 schiling, 
            System::UInt64 dimension, 
            System::Int64 rarity, 
            System::String^  weaponType, 
            System::UInt64 shortRange, 
            System::UInt64 longRange, 
            System::String^  attribute, 
            NewDataSet::weaponDBRow^  parentweaponDBRowByweaponDB_weapon) {
    NewDataSet::weaponRow^  rowweaponRow = (cli::safe_cast<NewDataSet::weaponRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(13) {code, name, crown, penny, 
        schiling, dimension, rarity, weaponType, shortRange, longRange, attribute, nullptr, nullptr};
    if (parentweaponDBRowByweaponDB_weapon != nullptr) {
        columnValuesArray[12] = parentweaponDBRowByweaponDB_weapon[0];
    }
    rowweaponRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowweaponRow);
    return rowweaponRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::weaponDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::weaponDataTable::Clone() {
    NewDataSet::weaponDataTable^  cln = (cli::safe_cast<NewDataSet::weaponDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::weaponDataTable::CreateInstance() {
    return (gcnew NewDataSet::weaponDataTable());
}

inline ::System::Void NewDataSet::weaponDataTable::InitVars() {
    this->columncode = __super::Columns[L"code"];
    this->columnname = __super::Columns[L"name"];
    this->columncrown = __super::Columns[L"crown"];
    this->columnpenny = __super::Columns[L"penny"];
    this->columnschiling = __super::Columns[L"schiling"];
    this->columndimension = __super::Columns[L"dimension"];
    this->columnrarity = __super::Columns[L"rarity"];
    this->columnweaponType = __super::Columns[L"weaponType"];
    this->columnshortRange = __super::Columns[L"shortRange"];
    this->columnlongRange = __super::Columns[L"longRange"];
    this->columnattribute = __super::Columns[L"attribute"];
    this->columnweapon_Id = __super::Columns[L"weapon_Id"];
    this->columnweaponDB_Id = __super::Columns[L"weaponDB_Id"];
}

inline ::System::Void NewDataSet::weaponDataTable::InitClass() {
    this->columncode = (gcnew ::System::Data::DataColumn(L"code", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
    __super::Columns->Add(this->columncode);
    this->columnname = (gcnew ::System::Data::DataColumn(L"name", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnname);
    this->columncrown = (gcnew ::System::Data::DataColumn(L"crown", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columncrown);
    this->columnpenny = (gcnew ::System::Data::DataColumn(L"penny", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnpenny);
    this->columnschiling = (gcnew ::System::Data::DataColumn(L"schiling", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnschiling);
    this->columndimension = (gcnew ::System::Data::DataColumn(L"dimension", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columndimension);
    this->columnrarity = (gcnew ::System::Data::DataColumn(L"rarity", ::System::Int64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnrarity);
    this->columnweaponType = (gcnew ::System::Data::DataColumn(L"weaponType", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnweaponType);
    this->columnshortRange = (gcnew ::System::Data::DataColumn(L"shortRange", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnshortRange);
    this->columnlongRange = (gcnew ::System::Data::DataColumn(L"longRange", ::System::UInt64::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnlongRange);
    this->columnattribute = (gcnew ::System::Data::DataColumn(L"attribute", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
    __super::Columns->Add(this->columnattribute);
    this->columnweapon_Id = (gcnew ::System::Data::DataColumn(L"weapon_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnweapon_Id);
    this->columnweaponDB_Id = (gcnew ::System::Data::DataColumn(L"weaponDB_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnweaponDB_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnweapon_Id}, 
            true)));
    this->columncode->AllowDBNull = false;
    this->columncode->Namespace = L"";
    this->columnname->AllowDBNull = false;
    this->columncrown->AllowDBNull = false;
    this->columnpenny->AllowDBNull = false;
    this->columnschiling->AllowDBNull = false;
    this->columndimension->AllowDBNull = false;
    this->columnrarity->AllowDBNull = false;
    this->columnweaponType->AllowDBNull = false;
    this->columnshortRange->AllowDBNull = false;
    this->columnlongRange->AllowDBNull = false;
    this->columnattribute->AllowDBNull = false;
    this->columnweapon_Id->AutoIncrement = true;
    this->columnweapon_Id->AllowDBNull = false;
    this->columnweapon_Id->Unique = true;
}

inline NewDataSet::weaponRow^  NewDataSet::weaponDataTable::NewweaponRow() {
    return (cli::safe_cast<NewDataSet::weaponRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::weaponDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::weaponRow(builder));
}

inline ::System::Type^  NewDataSet::weaponDataTable::GetRowType() {
    return NewDataSet::weaponRow::typeid;
}

inline ::System::Void NewDataSet::weaponDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->weaponRowChanged(this, (gcnew NewDataSet::weaponRowChangeEvent((cli::safe_cast<NewDataSet::weaponRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->weaponRowChanging(this, (gcnew NewDataSet::weaponRowChangeEvent((cli::safe_cast<NewDataSet::weaponRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->weaponRowDeleted(this, (gcnew NewDataSet::weaponRowChangeEvent((cli::safe_cast<NewDataSet::weaponRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->weaponRowDeleting(this, (gcnew NewDataSet::weaponRowChangeEvent((cli::safe_cast<NewDataSet::weaponRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDataTable::RemoveweaponRow(NewDataSet::weaponRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::weaponDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"weaponDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::weaponDBDataTable::weaponDBDataTable() {
    this->TableName = L"weaponDB";
    this->BeginInit();
    this->InitClass();
    this->EndInit();
}

inline NewDataSet::weaponDBDataTable::weaponDBDataTable(::System::Data::DataTable^  table) {
    this->TableName = table->TableName;
    if (table->CaseSensitive != table->DataSet->CaseSensitive) {
        this->CaseSensitive = table->CaseSensitive;
    }
    if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
        this->Locale = table->Locale;
    }
    if (table->Namespace != table->DataSet->Namespace) {
        this->Namespace = table->Namespace;
    }
    this->Prefix = table->Prefix;
    this->MinimumCapacity = table->MinimumCapacity;
}

inline NewDataSet::weaponDBDataTable::weaponDBDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
        ::System::Data::DataTable(info, context) {
    this->InitVars();
}

inline ::System::Data::DataColumn^  NewDataSet::weaponDBDataTable::weaponDB_IdColumn::get() {
    return this->columnweaponDB_Id;
}

inline ::System::Int32 NewDataSet::weaponDBDataTable::Count::get() {
    return this->Rows->Count;
}

inline NewDataSet::weaponDBRow^  NewDataSet::weaponDBDataTable::default::get(::System::Int32 index) {
    return (cli::safe_cast<NewDataSet::weaponDBRow^  >(this->Rows[index]));
}

inline ::System::Void NewDataSet::weaponDBDataTable::AddweaponDBRow(NewDataSet::weaponDBRow^  row) {
    this->Rows->Add(row);
}

inline NewDataSet::weaponDBRow^  NewDataSet::weaponDBDataTable::AddweaponDBRow() {
    NewDataSet::weaponDBRow^  rowweaponDBRow = (cli::safe_cast<NewDataSet::weaponDBRow^  >(this->NewRow()));
    cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(1) {nullptr};
    rowweaponDBRow->ItemArray = columnValuesArray;
    this->Rows->Add(rowweaponDBRow);
    return rowweaponDBRow;
}

inline ::System::Collections::IEnumerator^  NewDataSet::weaponDBDataTable::GetEnumerator() {
    return this->Rows->GetEnumerator();
}

inline ::System::Data::DataTable^  NewDataSet::weaponDBDataTable::Clone() {
    NewDataSet::weaponDBDataTable^  cln = (cli::safe_cast<NewDataSet::weaponDBDataTable^  >(__super::Clone()));
    cln->InitVars();
    return cln;
}

inline ::System::Data::DataTable^  NewDataSet::weaponDBDataTable::CreateInstance() {
    return (gcnew NewDataSet::weaponDBDataTable());
}

inline ::System::Void NewDataSet::weaponDBDataTable::InitVars() {
    this->columnweaponDB_Id = __super::Columns[L"weaponDB_Id"];
}

inline ::System::Void NewDataSet::weaponDBDataTable::InitClass() {
    this->columnweaponDB_Id = (gcnew ::System::Data::DataColumn(L"weaponDB_Id", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Hidden));
    __super::Columns->Add(this->columnweaponDB_Id);
    this->Constraints->Add((gcnew ::System::Data::UniqueConstraint(L"Constraint1", gcnew cli::array< ::System::Data::DataColumn^  >(1) {this->columnweaponDB_Id}, 
            true)));
    this->columnweaponDB_Id->AutoIncrement = true;
    this->columnweaponDB_Id->AllowDBNull = false;
    this->columnweaponDB_Id->Unique = true;
}

inline NewDataSet::weaponDBRow^  NewDataSet::weaponDBDataTable::NewweaponDBRow() {
    return (cli::safe_cast<NewDataSet::weaponDBRow^  >(this->NewRow()));
}

inline ::System::Data::DataRow^  NewDataSet::weaponDBDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
    return (gcnew NewDataSet::weaponDBRow(builder));
}

inline ::System::Type^  NewDataSet::weaponDBDataTable::GetRowType() {
    return NewDataSet::weaponDBRow::typeid;
}

inline ::System::Void NewDataSet::weaponDBDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanged(e);
    {
        this->weaponDBRowChanged(this, (gcnew NewDataSet::weaponDBRowChangeEvent((cli::safe_cast<NewDataSet::weaponDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDBDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowChanging(e);
    {
        this->weaponDBRowChanging(this, (gcnew NewDataSet::weaponDBRowChangeEvent((cli::safe_cast<NewDataSet::weaponDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDBDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleted(e);
    {
        this->weaponDBRowDeleted(this, (gcnew NewDataSet::weaponDBRowChangeEvent((cli::safe_cast<NewDataSet::weaponDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDBDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
    __super::OnRowDeleting(e);
    {
        this->weaponDBRowDeleting(this, (gcnew NewDataSet::weaponDBRowChangeEvent((cli::safe_cast<NewDataSet::weaponDBRow^  >(e->Row)), 
                e->Action)));
    }
}

inline ::System::Void NewDataSet::weaponDBDataTable::RemoveweaponDBRow(NewDataSet::weaponDBRow^  row) {
    this->Rows->Remove(row);
}

inline ::System::Xml::Schema::XmlSchemaComplexType^  NewDataSet::weaponDBDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
    ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
    ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
    NewDataSet^  ds = (gcnew NewDataSet());
    ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
    any1->MinOccurs = ::System::Decimal(0);
    any1->MaxOccurs = ::System::Decimal::MaxValue;
    any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any1);
    ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
    any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
    any2->MinOccurs = ::System::Decimal(1);
    any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
    sequence->Items->Add(any2);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute1->Name = L"namespace";
    attribute1->FixedValue = ds->Namespace;
    type->Attributes->Add(attribute1);
    ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
    attribute2->Name = L"tableTypeName";
    attribute2->FixedValue = L"weaponDBDataTable";
    type->Attributes->Add(attribute2);
    type->Particle = sequence;
    ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
    if (xs->Contains(dsSchema->TargetNamespace)) {
        ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
        ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
        try {
            ::System::Xml::Schema::XmlSchema^  schema = nullptr;
            dsSchema->Write(s1);
            for (            ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();             ) {
                schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                s2->SetLength(0);
                schema->Write(s2);
                if (s1->Length == s2->Length) {
                    s1->Position = 0;
                    s2->Position = 0;
                    for (                    ; ((s1->Position != s1->Length) 
                                && (s1->ReadByte() == s2->ReadByte()));                     ) {
                        ;
                    }
                    if (s1->Position == s1->Length) {
                        return type;
                    }
                }
            }
        }
        finally {
            if (s1 != nullptr) {
                s1->Close();
            }
            if (s2 != nullptr) {
                s2->Close();
            }
        }
    }
    xs->Add(dsSchema);
    return type;
}


inline NewDataSet::damageRow::damageRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tabledamage = (cli::safe_cast<NewDataSet::damageDataTable^  >(this->Table));
}

inline System::Boolean NewDataSet::damageRow::mod::get() {
    try {
        return (cli::safe_cast<::System::Boolean >(this[this->tabledamage->modColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'mod\' dans la table \'damage\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::damageRow::mod::set(System::Boolean value) {
    this[this->tabledamage->modColumn] = value;
}

inline System::Int64 NewDataSet::damageRow::damage_text::get() {
    return (cli::safe_cast<::System::Int64 >(this[this->tabledamage->damage_textColumn]));
}
inline System::Void NewDataSet::damageRow::damage_text::set(System::Int64 value) {
    this[this->tabledamage->damage_textColumn] = value;
}

inline System::Int32 NewDataSet::damageRow::weapon_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tabledamage->weapon_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'weapon_Id\' dans la table \'damage\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::damageRow::weapon_Id::set(System::Int32 value) {
    this[this->tabledamage->weapon_IdColumn] = value;
}

inline NewDataSet::weaponRow^  NewDataSet::damageRow::weaponRow::get() {
    return (cli::safe_cast<NewDataSet::weaponRow^  >(this->GetParentRow(this->Table->ParentRelations[L"weapon_damage"])));
}
inline System::Void NewDataSet::damageRow::weaponRow::set(NewDataSet::weaponRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"weapon_damage"]);
}

inline ::System::Boolean NewDataSet::damageRow::IsmodNull() {
    return this->IsNull(this->tabledamage->modColumn);
}

inline ::System::Void NewDataSet::damageRow::SetmodNull() {
    this[this->tabledamage->modColumn] = ::System::Convert::DBNull;
}

inline ::System::Boolean NewDataSet::damageRow::Isweapon_IdNull() {
    return this->IsNull(this->tabledamage->weapon_IdColumn);
}

inline ::System::Void NewDataSet::damageRow::Setweapon_IdNull() {
    this[this->tabledamage->weapon_IdColumn] = ::System::Convert::DBNull;
}


inline NewDataSet::weaponRow::weaponRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableweapon = (cli::safe_cast<NewDataSet::weaponDataTable^  >(this->Table));
}

inline System::String^  NewDataSet::weaponRow::code::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tableweapon->codeColumn]));
}
inline System::Void NewDataSet::weaponRow::code::set(System::String^  value) {
    this[this->tableweapon->codeColumn] = value;
}

inline System::String^  NewDataSet::weaponRow::name::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tableweapon->nameColumn]));
}
inline System::Void NewDataSet::weaponRow::name::set(System::String^  value) {
    this[this->tableweapon->nameColumn] = value;
}

inline System::UInt64 NewDataSet::weaponRow::crown::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableweapon->crownColumn]));
}
inline System::Void NewDataSet::weaponRow::crown::set(System::UInt64 value) {
    this[this->tableweapon->crownColumn] = value;
}

inline System::UInt64 NewDataSet::weaponRow::penny::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableweapon->pennyColumn]));
}
inline System::Void NewDataSet::weaponRow::penny::set(System::UInt64 value) {
    this[this->tableweapon->pennyColumn] = value;
}

inline System::UInt64 NewDataSet::weaponRow::schiling::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableweapon->schilingColumn]));
}
inline System::Void NewDataSet::weaponRow::schiling::set(System::UInt64 value) {
    this[this->tableweapon->schilingColumn] = value;
}

inline System::UInt64 NewDataSet::weaponRow::dimension::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableweapon->dimensionColumn]));
}
inline System::Void NewDataSet::weaponRow::dimension::set(System::UInt64 value) {
    this[this->tableweapon->dimensionColumn] = value;
}

inline System::Int64 NewDataSet::weaponRow::rarity::get() {
    return (cli::safe_cast<::System::Int64 >(this[this->tableweapon->rarityColumn]));
}
inline System::Void NewDataSet::weaponRow::rarity::set(System::Int64 value) {
    this[this->tableweapon->rarityColumn] = value;
}

inline System::String^  NewDataSet::weaponRow::weaponType::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tableweapon->weaponTypeColumn]));
}
inline System::Void NewDataSet::weaponRow::weaponType::set(System::String^  value) {
    this[this->tableweapon->weaponTypeColumn] = value;
}

inline System::UInt64 NewDataSet::weaponRow::shortRange::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableweapon->shortRangeColumn]));
}
inline System::Void NewDataSet::weaponRow::shortRange::set(System::UInt64 value) {
    this[this->tableweapon->shortRangeColumn] = value;
}

inline System::UInt64 NewDataSet::weaponRow::longRange::get() {
    return (cli::safe_cast<::System::UInt64 >(this[this->tableweapon->longRangeColumn]));
}
inline System::Void NewDataSet::weaponRow::longRange::set(System::UInt64 value) {
    this[this->tableweapon->longRangeColumn] = value;
}

inline System::String^  NewDataSet::weaponRow::attribute::get() {
    return (cli::safe_cast<::System::String^  >(this[this->tableweapon->attributeColumn]));
}
inline System::Void NewDataSet::weaponRow::attribute::set(System::String^  value) {
    this[this->tableweapon->attributeColumn] = value;
}

inline System::Int32 NewDataSet::weaponRow::weapon_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableweapon->weapon_IdColumn]));
}
inline System::Void NewDataSet::weaponRow::weapon_Id::set(System::Int32 value) {
    this[this->tableweapon->weapon_IdColumn] = value;
}

inline System::Int32 NewDataSet::weaponRow::weaponDB_Id::get() {
    try {
        return (cli::safe_cast<::System::Int32 >(this[this->tableweapon->weaponDB_IdColumn]));
    }
    catch (::System::InvalidCastException^ e) {
        throw (gcnew ::System::Data::StrongTypingException(L"La valeur pour la colonne \'weaponDB_Id\' dans la table \'weapon\' est DBNull.", 
            e));
    }
}
inline System::Void NewDataSet::weaponRow::weaponDB_Id::set(System::Int32 value) {
    this[this->tableweapon->weaponDB_IdColumn] = value;
}

inline NewDataSet::weaponDBRow^  NewDataSet::weaponRow::weaponDBRow::get() {
    return (cli::safe_cast<NewDataSet::weaponDBRow^  >(this->GetParentRow(this->Table->ParentRelations[L"weaponDB_weapon"])));
}
inline System::Void NewDataSet::weaponRow::weaponDBRow::set(NewDataSet::weaponDBRow^  value) {
    this->SetParentRow(value, this->Table->ParentRelations[L"weaponDB_weapon"]);
}

inline ::System::Boolean NewDataSet::weaponRow::IsweaponDB_IdNull() {
    return this->IsNull(this->tableweapon->weaponDB_IdColumn);
}

inline ::System::Void NewDataSet::weaponRow::SetweaponDB_IdNull() {
    this[this->tableweapon->weaponDB_IdColumn] = ::System::Convert::DBNull;
}

inline cli::array< NewDataSet::damageRow^  >^  NewDataSet::weaponRow::GetdamageRows() {
    if (this->Table->ChildRelations[L"weapon_damage"] == nullptr) {
        return gcnew cli::array< NewDataSet::damageRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< NewDataSet::damageRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"weapon_damage"])));
    }
}


inline NewDataSet::weaponDBRow::weaponDBRow(::System::Data::DataRowBuilder^  rb) : 
        ::System::Data::DataRow(rb) {
    this->tableweaponDB = (cli::safe_cast<NewDataSet::weaponDBDataTable^  >(this->Table));
}

inline System::Int32 NewDataSet::weaponDBRow::weaponDB_Id::get() {
    return (cli::safe_cast<::System::Int32 >(this[this->tableweaponDB->weaponDB_IdColumn]));
}
inline System::Void NewDataSet::weaponDBRow::weaponDB_Id::set(System::Int32 value) {
    this[this->tableweaponDB->weaponDB_IdColumn] = value;
}

inline cli::array< NewDataSet::weaponRow^  >^  NewDataSet::weaponDBRow::GetweaponRows() {
    if (this->Table->ChildRelations[L"weaponDB_weapon"] == nullptr) {
        return gcnew cli::array< NewDataSet::weaponRow^  >(0);
    }
    else {
        return (cli::safe_cast<cli::array< NewDataSet::weaponRow^  >^  >(__super::GetChildRows(this->Table->ChildRelations[L"weaponDB_weapon"])));
    }
}


inline NewDataSet::damageRowChangeEvent::damageRowChangeEvent(NewDataSet::damageRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::damageRow^  NewDataSet::damageRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::damageRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline NewDataSet::weaponRowChangeEvent::weaponRowChangeEvent(NewDataSet::weaponRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::weaponRow^  NewDataSet::weaponRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::weaponRowChangeEvent::Action::get() {
    return this->eventAction;
}


inline NewDataSet::weaponDBRowChangeEvent::weaponDBRowChangeEvent(NewDataSet::weaponDBRow^  row, ::System::Data::DataRowAction action) {
    this->eventRow = row;
    this->eventAction = action;
}

inline NewDataSet::weaponDBRow^  NewDataSet::weaponDBRowChangeEvent::Row::get() {
    return this->eventRow;
}

inline ::System::Data::DataRowAction NewDataSet::weaponDBRowChangeEvent::Action::get() {
    return this->eventAction;
}
