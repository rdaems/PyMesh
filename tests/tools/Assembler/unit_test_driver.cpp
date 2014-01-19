#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Mesh/TriangleMeshTest.h"
#include "Mesh/TetrahedronMeshTest.h"
#include "ShapeFunctions/ShapeFunctionTest.h"
#include "ShapeFunctions/IntegratorTest.h"
#include "FESetting/FESettingTest.h"
#include "Assemblers/StiffnessAssemblerTest.h"
#include "Assemblers/MassAssemblerTest.h"
#include "Assemblers/LumpedMassAssemblerTest.h"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}